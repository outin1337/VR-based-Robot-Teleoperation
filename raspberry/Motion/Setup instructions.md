## Install
Remember to update and upgrade apt first
1.
```
sudo apt install autoconf automake build-essential pkgconf libtool git libzip-dev libjpeg-dev gettext libmicrohttpd-dev libavformat-dev libavcodec-dev libavutil-dev libswscale-dev libavdevice-dev default-libmysqlclient-dev libpq-dev libsqlite3-dev libwebp-dev
```
2. 
```
sudo wget https://github.com/Motion-Project/motion/releases/download/release-4.5.1/$(lsb_release -cs)_motion_4.5.1-1_$(dpkg --print-architecture
).deb
sudo dpkg -i $(lsb_release -cs)_motion_4.5.1-1_$(dpkg --print-architecture).deb
```

## How to run
```
sudo motion -c /etc/motion/camera1.conf
```

```
sudo motion -c /etc/motion/camera2.conf
```

Individually for now
