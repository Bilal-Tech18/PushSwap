##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC		= 		push_swap.c \
				sources/function_used.c

OBJ     =       $(SRC:.c=.o)

NAME    =       push_swap

LIBMY	=	lib/my/libmy.a

TEST_NAME	=	unit_tests

CFLAGS	=	-I./includes

all:    $(NAME)

$(LIBMY):
	make	-C		lib/my/

$(NAME):        $(LIBMY) $(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all

$(TEST_NAME):   $(LIBMY) $(OBJ)
		gcc -o $(TEST_NAME) $(OBJ) $(LIBMY) tests/test.c -lcriterion --coverage

tests_run:		unit_tests
		./$(TEST_NAME) $(LIBMY)