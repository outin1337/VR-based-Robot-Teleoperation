import pyrealsense2 as rs
import numpy as np
import cv2
import socket

DEBUG = False
RUN = True
ONCE = True

HOST = '127.0.0.1'  # Change this to the IP address of your Unity application
PORT = 12345        # Change this to the port number your Unity application is listening on

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.connect((HOST, PORT))


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

pipeline.start(config)

try:
    while RUN:
        align = rs.align(rs.stream.color)
        
        frames = pipeline.wait_for_frames()
        aligned_frames = align.process(frames)

        color_frame = aligned_frames.first(rs.stream.color)
        depth_frame = aligned_frames.get_depth_frame()

        
        if not depth_frame or not color_frame:
            continue

        depth_image = np.asanyarray(depth_frame.get_data())
        color_image = np.asanyarray(color_frame.get_data())

        rgba = cv2.cvtColor(color_image, cv2.COLOR_RGB2RGBA)
        rgba[:,:,3] = depth_image
        

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