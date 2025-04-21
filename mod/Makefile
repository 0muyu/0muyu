INCLUDE_PATH = ../include
LIBRARY_PATH = ../library
CC = gcc
TARGET = copy
CFLAGES = -I$(INCLUDE_PATH) -c -g -Wall
SRCFILE = $(wildcard *.c) #
DESTFILE = $(patsubst %.c,%.o,$(SRCFILE)) #

# main target
$(TARGET):$(DESTFILE)
	$(CC) $^ -o $@

# 
%.o:%.c
	$(CC) $(CFLAGES) $<

clean:
	rm $(DESTFILE) -rf
	rm $(TARGET) -rf
