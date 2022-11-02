NAME = libftprintf.a

CFILES = ft_printf.c \

OBJ = (CFILES:.c=.o)

AR = ar 

all: $(NAME)

$(NAME):ft_printf.h

clean:

fclean:

re:

.PHONY: all clean fclean re
