#https://gist.github.com/felixvd/ffafe498719b85f84fdcb4e0beb69036

from math import pi, cos, sin, sqrt, atan2

def norm2(a, b, c=0.0):
  return sqrt(a**2 + b**2 + c**2)

def ur_axis_angle_to_quat(axis_angle):
  # https://en.wikipedia.org/wiki/Axis%E2%80%93angle_representation#Unit_quaternions
  angle = norm2(*axis_angle)
  axis_normed = [axis_angle[0]/angle, axis_angle[1]/angle, axis_angle[2]/angle]
  s = sin(angle/2)
  return [s*axis_normed[0], s*axis_normed[1], s*axis_normed[2], cos(angle/2)]   #xyzw

def quat_to_ur_axis_angle(quaternion):
  # https://en.wikipedia.org/wiki/Axis%E2%80%93angle_representation#Unit_quaternions
  # quaternion must be [xyzw]
  angle = 2*atan2(norm2(quaternion[0], quaternion[1], quaternion[2]), quaternion[3])
  if abs(angle) > 1e-6:
    axis_normed = [ quaternion[0]/sin(angle/2), quaternion[1]/sin(angle/2), quaternion[2]/sin(angle/2) ]
  else:
    axis_normed = 0.0
  return [axis_normed[0]*angle, axis_normed[1]*angle, axis_normed[2]*angle]