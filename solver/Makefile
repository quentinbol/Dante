##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## true
##

NAME = solver

SRC = 	main.c 											\
		\
		../lib/linelen.c 								\
		../lib/clean.c 									\
		../lib/my_compute_power_rec.c					\
		../lib/my_compute_square_root.c					\
		../lib/my_find_prime_sup.c						\
		../lib/my_getnbr.c								\
		../lib/my_isneg.c								\
		../lib/my_is_prime.c							\
		../lib/my_put_nbr.c								\
		../lib/my_revstr.c								\
		../lib/my_showmem.c								\
		../lib/my_showstr.c								\
		../lib/my_sort_int_array.c						\
		../lib/my_strcapitalize.c						\
		../lib/my_strcat.c								\
		../lib/my_strcmp.c								\
		../lib/my_strcpy.c								\
		../lib/my_str_isalpha.c							\
		../lib/my_str_islower.c							\
		../lib/my_str_isnum.c							\
		../lib/my_str_isprintable.c						\
		../lib/my_str_isupper.c							\
		../lib/my_strlowcase.c							\
		../lib/my_strncat.c								\
		../lib/my_strncmp.c								\
		../lib/my_strncpy.c								\
		../lib/my_strstr.c								\
		../lib/my_strupcase.c							\
		../lib/my_swap.c								\
		../lib/my_str_to_word_array.c 					\
		../lib/my_tab_copy.c 							\
		\
		../lib/my_printf/lib/my/my_strlen.c 			\
		../lib/my_printf/lib/my/my_putchar.c 			\
		../lib/my_printf/lib/my/my_printf.c 			\
		../lib/my_printf/lib/my/my_putstr.c 			\
		../lib/my_printf/lib/my/my_getstr.c 			\
		../lib/my_printf/lib/my/my_putnbr_base.c


CFLASG = -W -Wextra -Wall -Wno-pointer-sign -Werror

OBJ = $(SRC:.c=.o)

CC = gcc

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc $(CFLAGS) -o $(NAME) $(SRC) -g
			@ echo "Compiled !"

clean:
	rm -f $(OBJ)
	@ echo "Clean done !"

fclean: clean
	rm -f $(NAME)

re: fclean all

test_clean :
	rm -f *.gcno
	rm -f *.gcda
	rm units_test

.PHONY: clean fclean re test test_clean

.SILENT:
