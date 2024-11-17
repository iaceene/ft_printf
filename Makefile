SRC = ./src/ft_put_HEXA.c  \
	  ./src/ft_put_Unbr.c  \
	  ./src/ft_put_Address.c \
	  ./src/ft_put_char.c   \
	  ./src/ft_put_hex.c   \
	  ./src/ft_put_nbr.c    \
	  ./src/ft_put_str.c  \
	  ./src/ft_printf.c

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
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all