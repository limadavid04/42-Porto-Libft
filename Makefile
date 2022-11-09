# -*- Makefile -*-
NAME = libft
CC=cc
CFLAGS=-Wall -Wextra -Wall
FILES = ft_isascii  ft_memcpy  ft_strjoin  ft_strrchr\
ft_atoi     ft_isdigit  ft_memmove  ft_strlcat ft_strtrim\
ft_bzero   ft_isprint ft_memset   ft_strlcpy  ft_substr\
ft_calloc   ft_memccpy  ft_split    ft_strlen   ft_tolower\
ft_isalnum  ft_memchr   ft_strchr   ft_strncmp  ft_toupper\
ft_isalpha  ft_memcmp   ft_strdup   ft_strnstr
OBJS= $(FILES:=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
