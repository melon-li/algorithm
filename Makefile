CC = g++
VPATH = $VPATH:./common:./basic

objects = test.o common.o get_maxprime.o
test:$(objects)
	
