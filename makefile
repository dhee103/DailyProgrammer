CC = gcc
CFLAGS = -std=c11 -O -Wall -Wextra -Wunused-function -pedantic -g

.PHONY: clean

12DaysOfChristmas: 12DaysOfChristmas.o

letterByLetter: letterByLetter.o

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -rf 12DaysOfChristmas letterByLetter *.o
