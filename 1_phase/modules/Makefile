obj-m += hello.o

all:    
	make -C /lib/modules/3.5.0-43-generic/build M=$(PWD) modules
clean:    
	make -C /lib/modules/3.5.0-43-generic/build M=$(PWD) clean

