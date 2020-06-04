#!/bin/bash

#/etc/network/interface文件添加
#auto wlan0 内核在引导的时候，会自动启动标志为“auto”的设备
source ./shell/wifi/alientek_usb_wifi_setup.sh -m station -i 123 -p 88888888 -d wlan0


ifconfig wlan0 192.168.1.252 netmask 255.255.255.0
route add default gw 192.168.1.1
#dns 114.114.114.114

#sed -i '$a nameserver 114.114.114.114' /etc/resolv.conf
#sed -i '$a nameserver 119.29.29.29' /etc/resolv.conf
#202.96.128.86  广东电信
echo "nameserver 202.96.128.86" > /etc/resolv.conf
