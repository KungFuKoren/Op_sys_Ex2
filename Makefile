CC = gcc
CFLAGS = -Wall -Wextra -std=c99

TARGET = ttt
SRCS = ttt.c

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
