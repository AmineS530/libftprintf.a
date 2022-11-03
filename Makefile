CC = cc

CFLAGS = -Wall -Wextra -Werror -c

NAME = libftprintf.a

CFILES = ft_printf.c \
		ft_putaddr_fd.c \
		ft_putchar_fd.c \
		ft_putnbr_fd.c \
		ft_putnbr_fd_hex.c \
		ft_putnbr_fd_unsigned.c \
		ft_putstr_fd.c \

OBJ = $(CFILES:.c=.o)

AR = ar rcs

all: $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJ) ft_printf.h
	$(AR)  $@ $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re
