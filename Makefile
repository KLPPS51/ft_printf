NAME = libftprintf.a
 
SRCS = ft_printf.c ft_print_hex.c ft_putchar.c ft_putnbr.c ft_unsigned_putnbr.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "\nArchived $(NAME)"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
 
clean:
	rm -f $(OBJS)
  
fclean: clean
	rm -f $(NAME)
  
re: fclean all
  
.PHONY: clean fclean re all