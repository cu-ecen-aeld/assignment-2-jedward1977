
RM=rm

ifeq ($(CROSS_COMPILE),aarch64-none-linux-gnu-)
        CC = /home/john/projects/tools/aarch64-none-linux-gnu-gcc
else
        CC = gcc
endif

writer:
	$(CC) writer.c -o writer

.PHONY : clean
clean:
	$(RM) writer *.o
