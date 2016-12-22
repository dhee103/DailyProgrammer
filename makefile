CC = gcc
CFLAGS = -std=c11 -O -Wall -Werror -Wextra -Wunused-function -pedantic -g

.PHONY: clean

12DaysOfChristmas: 12DaysOfChristmas.o

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -rf 12DaysOfChristmas *.o
