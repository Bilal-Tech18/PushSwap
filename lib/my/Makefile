##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile lib
##

SRC	=	./my_revstr.c \
		./my_putstr.c \
		./my_compute_power_rec.c \
		./my_strlowcase.c \
		./my_strcapitalize.c \
		./my_str_isupper.c \
		./my_find_prime_sup.c \
		./my_strlen.c \
		./my_str_isnum.c \
		./my_getnbr.c \
		./my_str_islower.c \
		./my_put_nbr.c \
		./my_sort_int_array.c \
		./my_isneg.c \
		./my_strncat.c \
		./my_compute_square_root.c \
		./my_strncpy.c \
		./my_is_prime.c \
		./my_strupcase.c \
		./my_strcat.c \
		./my_strstr.c \
		./my_str_isalpha.c \
		./my_putchar.c \
		./my_strcmp.c \
		./my_showmem.c \
		./my_str_isprintable.c \
		./my_swap.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a


$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include
	cp $(NAME) ../

all:    $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
