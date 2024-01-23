import pyrealsense2 as rs
import numpy as np
import cv2
from ultralytics import YOLO
from ultralytics.utils.plotting import Annotator
import random
import torch

class CameraStream:

    def __init__(self, DEBUG=True, height=640, width=480, fps=30):
        self.DEBUG = DEBUG
        if DEBUG: print('WARNING: Debug is on')
        self.RUN = True

        self.model = YOLO('yolov8n.pt')

        self.pipeline = rs.pipeline()
        self.config = rs.config()

        self.pipeline_wrapper = rs.pipeline_wrapper(self.pipeline)
        self.pipeline_profile = self.config.resolve(self.pipeline_wrapper)
        self.device = self.pipeline_profile.get_device()
        self.device_product_line = str(self.device.get_info(rs.camera_info.product_line))

        self.found_rgb = False
        for s in self.device.sensors:
            if s.get_info(rs.camera_info.name) == 'RGB Camera':
                self.found_rgb = True
                break
        if not self.found_rgb:
            print("The demo requires Depth camera with Color sensor")
            exit(0)
        
        self.config.enable_stream(rs.stream.depth, height, width, rs.format.z16, fps)

        if self.device_product_line == 'L500':
            self.config.enable_stream(rs.stream.color, 960, 540, rs.format.bgr8, 30)
        else:
            self.config.enable_stream(rs.stream.color, height, width, rs.format.bgr8, fps)

        self.pipeline.start(self.config)
    
    def stream(self):
        try:
            while True:
                self.align = rs.align(rs.stream.color)
                self.frames = self.pipeline.wait_for_frames()
                self.aligned_frames = self.align.process(self.frames)

                self.color_frame = self.aligned_frames.first(rs.stream.color)
                self.depth_frame = self.aligned_frames.get_depth_frame()

                if not self.depth_frame or not self.color_frame:
                    continue

                self.depth_image = np.asanyarray(self.depth_frame.get_data())
                self.color_image = np.asanyarray(self.color_frame.get_data())


                self.results = self.model.predict(self.color_image, conf=0.7, verbose=False)
                self.annotator = Annotator(self.color_image)

                for r in self.results:
                  self.boxes = r.boxes
                  for box in self.boxes:
                      b = box.xyxy[0]
                      c = box.cls
                      x1, y1, x2, y2 = b.numpy()
                      x, y = (x1+x2)/2, (y1+y2)/2
                      self.label = self.model.names[int(c)] + " " + str(round(self.depth_frame.get_distance(int(x), int(y)), 2)) + "m"
                      random.seed(int(c))
                      self.annotator.box_label(b, label=self.label, color=(random.randint(0,255),random.randint(0,255),random.randint(0,255)))
                      if self.DEBUG:
                        self.annotator.box_label(torch.tensor([x,y+1, x,y+1]), "(" + str(round(x,2)) +", "+ str(round(y,2)) + ")")

                self.depth_colormap = cv2.applyColorMap(cv2.convertScaleAbs(self.depth_image, alpha=0.03), cv2.COLORMAP_JET)

                self.depth_colormap_dim = self.depth_colormap.shape
                self.color_colormap_dim = self.color_image.shape

<<<<<<< HEAD
                """
=======
                # MAYBE REMOVE THIS?? -
>>>>>>> a1b5aa816667e28bb1820fee7cec2b7d09069484
                if self.depth_colormap_dim != self.color_colormap_dim:
                    self.resized_color_image = cv2.resize(self.color_image, dsize=(self.depth_colormap_dim[1], self.depth_colormap_dim[0]), interpolation=cv2.INTER_AREA)
                    images = np.hstack((self.resized_color_image, self.depth_colormap))
                else:
                    images = np.hstack((self.color_image, self.depth_colormap))
                """

                images = np.hstack((self.color_image, self.depth_colormap))

                if self.DEBUG:
                    cv2.namedWindow('RealSense')
                    cv2.imshow('RealSense', images)
                    self.key = cv2.waitKey(1)
                
                if self.key & 0xFF == ord('q') or self.key & 0xFF == ord('Q'):
                        self.RUN = False
                        print('test')
                        cv2.destroyAllWindows()
                        break
                
                return images

        finally:
            self.pipeline.stop()
<<<<<<< HEAD

stream = CameraStream()

#stream.config()
stream.stream()
=======
>>>>>>> a1b5aa816667e28bb1820fee7cec2b7d09069484
