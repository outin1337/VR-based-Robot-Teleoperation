import math


#https://gitlab.com/sdurobotics/ur_rtde/-/issues/69

def d2r(degrees):
    return math.radians(degrees)

def r2d(radians):
    return math.degrees(radians)

def rpy2rv(roll, pitch, yaw):
    alpha = d2r(yaw)
    beta = d2r(pitch)
    gamma = d2r(roll)

    ca = math.cos(alpha)
    cb = math.cos(beta)
    cg = math.cos(gamma)
    sa = math.sin(alpha)
    sb = math.sin(beta)
    sg = math.sin(gamma)

    r11 = ca * cb
    r12 = ca * sb * sg - sa * cg
    r13 = ca * sb * cg + sa * sg
    r21 = sa * cb
    r22 = sa * sb * sg + ca * cg
    r23 = sa * sb * cg - ca * sg
    r31 = -sb
    r32 = cb * sg
    r33 = cb * cg

    theta = math.acos((r11 + r22 + r33 - 1) / 2)
    sth = math.sin(theta)
    kx = (r32 - r23) / (2 * sth)
    ky = (r13 - r31) / (2 * sth)
    kz = (r21 - r12) / (2 * sth)

    return [(theta * kx), (theta * ky), (theta * kz)]


def rv2rpy(rx, ry, rz):
    theta = math.sqrt(rx * rx + ry * ry + rz * rz)
    kx = rx / theta
    ky = ry / theta
    kz = rz / theta
    cth = math.cos(theta)
    sth = math.sin(theta)
    vth = 1 - math.cos(theta)

    r11 = kx * kx * vth + cth
    r12 = kx * ky * vth - kz * sth
    r13 = kx * kz * vth + ky * sth
    r21 = kx * ky * vth + kz * sth
    r22 = ky * ky * vth + cth
    r23 = ky * kz * vth - kx * sth
    r31 = kx * kz * vth - ky * sth
    r32 = ky * kz * vth + kx * sth
    r33 = kz * kz * vth + cth

    beta = math.atan2(-r31, math.sqrt(r11 * r11 + r21 * r21))

    if beta > d2r(89.99):
        beta = d2r(89.99)
        alpha = 0
        gamma = math.atan2(r12, r22)
    elif beta < -d2r(89.99):
        beta = -d2r(89.99)
        alpha = 0
        gamma = -math.atan2(r12, r22)
    else:
        cb = math.cos(beta)
        alpha = math.atan2(r21 / cb, r11 / cb)
        gamma = math.atan2(r32 / cb, r33 / cb)

    return [r2d(gamma), r2d(beta), r2d(alpha)]