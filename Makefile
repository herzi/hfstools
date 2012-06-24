CC=clang

all: hlink

clean:
	rm -rf hlink

hlink: hlink.c
	$(CC) -o $@ $< -Wall -Wextra -O
