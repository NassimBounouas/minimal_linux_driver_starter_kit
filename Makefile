# Makefile pour le module list_processes
obj-m := driver.o
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)
default:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
install: default
	$(MAKE) -C $(KDIR) M=$(PWD) modules_install
	depmod -a
load: install
	modprobe driver
unload:
	modprobe -r driver
clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
