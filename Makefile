# # -*- Makefile -*-
NAME = libft.a
# NAME = libft
CC=cc
CFLAGS=-Wall -Wextra -Werror
FILES = ft_isascii  ft_memcpy  ft_strjoin  ft_strrchr\
ft_atoi     ft_isdigit  ft_memmove  ft_strlcat ft_strtrim\
ft_bzero   ft_isprint ft_memset   ft_strlcpy  ft_substr\
ft_calloc   ft_memccpy  ft_split    ft_strlen   ft_tolower\
ft_isalnum  ft_memchr   ft_strchr   ft_strncmp  ft_toupper\
ft_isalpha  ft_memcmp   ft_strdup   ft_strnstr ft_itoa ft_strmapi\
ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd
OBJS= $(FILES:=.o)
BONUS = ft_lstnew\
all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

# $(NAME): $(OBJS)
# 	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
$(BONUS) : $(OBJS)
	ar -rc $(NAME) $(OBJS) $(BONUS:=.o)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(FILES:=.c)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
