import pyrealsense2 as rs
import numpy as np
import cv2
from ultralytics import YOLO
from ultralytics.utils.plotting import Annotator
import random
import torch


DEBUG = False
RUN = True
ONCE = True

#model = YOLO('yolov8n-seg.pt')

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
config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
#config.enable_stream(rs.stream.accel, rs.format.motion_xyz32f, 250)
#config.enable_stream(rs.stream.gyro, rs.format.motion_xyz32f, 200)

pipeline.start(config)

try:
    while RUN:
        align = rs.align(rs.stream.color)
        
        frames = pipeline.wait_for_frames()
        aligned_frames = align.process(frames)

        color_frame = aligned_frames.first(rs.stream.color)
        depth_frame = aligned_frames.get_depth_frame()

        """
        depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()
        """
        
        if not depth_frame or not color_frame:
            continue

        depth_image = np.asanyarray(depth_frame.get_data())
        color_image = np.asanyarray(color_frame.get_data())

        rgba = cv2.cvtColor(color_image, cv2.COLOR_RGB2RGBA)
        rgba[:,:,3] = depth_image

        """
        results = model.predict(color_image, conf=0.7, verbose=False)
        annotator = Annotator(color_image)
        if results[0].masks is not None:
            clss = results[0].boxes.cls.cpu().tolist()
            masks = results[0].masks.xy
            for ind, mask, cls in zip(range(len(masks)), masks, clss):
                arr_len = len(masks[ind])
                #x, y = masks[ind][arr_len//8][0], masks[ind][arr_len//8][1]
                x, y = masks[ind][0][0], masks[ind][0][1]
                annotator.seg_bbox(mask=mask,
                                   det_label=model.model.names[int(cls)] + " " + str(round(depth_frame.get_distance(int(x), int(y)), 2)) + "m")
                if DEBUG:
                    annotator.box_label(torch.tensor([x,y+15, x,y+16]), "(" + str(x) +", "+ str(y) + ")")
        """

        #for r in results:
        #  
        #  boxes = r.boxes
        #  for box in boxes:
        #      b = box.xyxy[0]
        #      c = box.cls
        #      x1, y1, x2, y2 = b.numpy()
        #      x, y = (x1+x2)/2, (y1+y2)/2
        #      label = model.names[int(c)] + " " + str(round(depth_frame.get_distance(int(x), int(y)), 2)) + "m"
        #      random.seed(int(c))
        #      annotator.box_label(b, label=label, color=(random.randint(0,255),random.randint(0,255),random.randint(0,255)))
        #      if DEBUG:
        #        annotator.box_label(torch.tensor([x,y+1, x,y+1]), "(" + str(round(x,2)) +", "+ str(round(y,2)) + ")")
              #print(model.names[int(c)], b)
        #yolo_frame = results[0].plot()
        #yolo_frame = annotator.result()

        

        """
        if depth_colormap_dim != color_colormap_dim:
            resized_color_image = cv2.resize(color_image, dsize=(depth_colormap_dim[1], depth_colormap_dim[0]), interpolation=cv2.INTER_AREA)
            images = np.hstack((resized_color_image, depth_colormap))
        else:
            images = np.hstack((color_image, depth_colormap))
        """

        

        if DEBUG:
            depth_colormap = cv2.applyColorMap(cv2.convertScaleAbs(depth_image, alpha=0.03), cv2.COLORMAP_JET)
            images = np.hstack((color_image, depth_colormap))
            #cv2.namedWindow('RealSense')
            #cv2.imshow('RealSense', images)
            cv2.imshow('RGB', color_image)
            cv2.imshow('Depth', depth_image)
            key = cv2.waitKey(1)
        
        
        if key & 0xFF == ord('q') or key & 0xFF == ord('Q'):
                RUN = False
                cv2.destroyAllWindows()
                break

finally:
    pipeline.stop()