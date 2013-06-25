fpw(From Pograph's Weblog)
===

Linux kernel module without exceptions from Pograph's Weblog

Original source:
http://pograph.wordpress.com/2009/04/05/porting-cpp-code-to-linux-kernel/

It works at least on Linux 3.7.3-101.fc17.x86_64

Howto:

make

sudo insmod mydrv.ko

sudo rmmod mydrv.ko

dmesg|tail

..] <6>C++ driver started

..] cpp module installed

..] <6>Goodbye C++ driver

..] cpp module removed


In c++ code you shouldn't ust stdlibc++, rtti or exceptions
