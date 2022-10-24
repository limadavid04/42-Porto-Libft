# -*- Makefile -*-
CC=gcc
CFLAGS=-Wall -Wextra -Wall
OBJECTS=

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@
