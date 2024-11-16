SRC = /src/ft_put_HEXA.c  \
	  /src/ft_put_Unbr.c  \
	  /src/ft_putaddres.c \
	  /src/ft_putchar.c   \
	  /src/ft_puthexa.c   \
	  /src/ft_putnbr.c    \
	  /src/ft_putstr.c

INCLUD = /includes/ft_printf.h
NAME = libftprintf.a
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %.c $(INCLUD)
	cc $(CFLAGS) -c $< -o $@

clean :
	rm -f $(SRC_O) $(B_SRC_O)

fclean : clean
	rm -f $(NAME)

re : fclean all