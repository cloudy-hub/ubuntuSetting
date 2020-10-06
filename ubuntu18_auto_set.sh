#!/bin/bash

echo "-----------------ubuntu18_auto_set.sh  start---------------"
echo $PWD
ubuntu_personal_IP_file="./ubuntu18_static_IP/01-network-manager-all.yaml"
ubuntu_natural_IP_file="/etc/netplan/01-network-manager-all.yaml"
ubuntu_personal_vim_file="./vim_style/vimrc"
ubuntu_natural_vim_file="/etc/vim/vimrc"

fun_BakFile()
{
	echo $1
	echo $2
if [ -e $1 ]
then
	echo "$1文件存在"
	sudo cp $2 $2.bak
	sudo cp $1 $2
	sudo netplan apply
else
	echo  "$1配置文件[不]存在"
fi
}

fun_BakFile $ubuntu_personal_IP_file $ubuntu_natural_IP_file
fun_BakFile $ubuntu_personal_vim_file $ubuntu_natural_vim_file

