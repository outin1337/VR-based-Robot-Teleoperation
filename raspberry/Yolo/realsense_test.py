import pyrealsense2 as rs
import numpy as np
import cv2
from ultralytics import YOLO
from ultralytics.utils.plotting import Annotator
import torch

model = YOLO('raspberry\Yolo\yolov8n-seg.pt')

pipeline = rs.pipeline()
config = rs.config()

pipeline_wrapper = rs.pipeline_wrapper(pipeline)
pipeline_profile = config.resolve(pipeline_wrapper)
device = pipeline_profile.get_device()
device_product_line = str(device.get_info(rs.camera_info.product_line))

found_rgb = False
for s in device.sensors:
    if s.get_info(rs.camera_info.name) == 'RGB Camera':
        found_rgb = True
        break
if not found_rgb:
    print("The demo requires Depth camera with Color sensor")
    exit(0)

config.enable_stream(rs.stream.depth, 640, 480, rs.format.z16, 30)

if device_product_line == 'L500':
    config.enable_stream(rs.stream.color, 960, 540, rs.format.bgr8, 30)
else:
    config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

pipeline.start(config)
once = True

try:
    while True:
        frames = pipeline.wait_for_frames()
        depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()
        if not depth_frame or not color_frame:
            continue

        depth_image = np.asanyarray(depth_frame.get_data())
        color_image = np.asanyarray(color_frame.get_data())

        
        results = model.predict(color_image, conf=0.8)
        annotator = Annotator(color_image)
        # TODO: Fix FOV translation between rgb and depth camera (x,y)
        if results[0].masks is not None:
            clss = results[0].boxes.cls.cpu().tolist()
            masks = results[0].masks.xy
            for ind, mask, cls in zip(range(len(masks)), masks, clss):
                arr_len = len(masks[ind])
                x, y = masks[ind][arr_len//2][0], masks[ind][arr_len//2][1]
                #x, y = masks[ind][ind][0], masks[ind][ind][1]
                annotator.seg_bbox(mask=mask,
                                   det_label=model.model.names[int(cls)] + " " + str(round(depth_frame.get_distance(int(x), int(y)), 2)) + "m")
                annotator.box_label(torch.tensor([x,y, x+1,y+1]), "POINT (" + str(x) +", "+ str(y) + ")")

        #for r in results:
            
                
           #boxes = r.boxes
           #for box in boxes:
           #    b = box.xyxy[0]
           #    c = box.cls
           #    x1, y1, x2, y2 = b.numpy()
           #    x, y = (x1+x2)/2, (y1+y2)/2
           #    annotator.box_label(b, model.names[int(c)] + " " + str(round(depth_frame.get_distance(int(x), int(y)), 2)) + "m")
           #    #print(model.names[int(c)], b)
        #yolo_frame = results[0].plot()
        #yolo_frame = annotator.result()

        depth_colormap = cv2.applyColorMap(cv2.convertScaleAbs(depth_image, alpha=0.03), cv2.COLORMAP_JET)

        depth_colormap_dim = depth_colormap.shape
        color_colormap_dim = color_image.shape

        if depth_colormap_dim != color_colormap_dim:
            resized_color_image = cv2.resize(color_image, dsize=(depth_colormap_dim[1], depth_colormap_dim[0]), interpolation=cv2.INTER_AREA)
            images = np.hstack((resized_color_image, depth_colormap))
        else:
            images = np.hstack((color_image, depth_colormap))

        cv2.namedWindow('RealSense')
        cv2.imshow('RealSense', images)
        cv2.waitKey(1)

finally:
    pipeline.stop()