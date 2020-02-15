# @Author: nniinima
# @Date:   2020-02-15T22:06:30+02:00
# @Last modified by:   nniinima
# @Last modified time: 2020-02-15T22:20:06+02:00
CC = gcc
CFLAGS = - lncurses -I$(IDIR)

SRCDIR = ./
SOURCES = ./*.c

all: sudoku run clean

sudoku:
	$(CC) $(SOURCES) -Wall -Werror -Wextra -o $@

run:
	./sudoku

clean:
	rm sudoku
