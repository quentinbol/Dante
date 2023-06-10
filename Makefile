##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## compile faster
##

.PHONY: all
SRC = 		lib/my_compute_power_rec.c		\
		lib/my_compute_square_root.c		\
		lib/my_find_prime_sup.c			\
		lib/my_getnbr.c				\
		lib/my_isneg.c				\
		lib/my_is_prime.c			\
		lib/my_put_nbr.c			\
		lib/my_revstr.c				\
		lib/my_showmem.c			\
		lib/my_showstr.c			\
		lib/my_sort_int_array.c			\
		lib/my_strcapitalize.c			\
		lib/my_strcat.c				\
		lib/my_strcmp.c				\
		lib/my_strcpy.c				\
		lib/my_str_isalpha.c			\
		lib/my_str_islower.c			\
		lib/my_str_isnum.c			\
		lib/my_str_isprintable.c		\
		lib/my_str_isupper.c			\
		lib/my_strlowcase.c			\
		lib/my_strncat.c			\
		lib:my_strncmp.c			\
		lib/my_strncpy.c			\
		lib/my_strstr.c				\
		lib/my_strupcase.c				\
		lib/my_swap.c				\
		\
		lib/my_printf/lib/my/my_printf.c 		\
		lib/my_printf/lib/my/my_strlen.c 		\
		lib/my_printf/lib/my/my_putstr.c 		\
		lib/my_printf/lib/my/my_putnbr_base.c 		\
		lib/my_printf/lib/my/my_putchar.c		\
		lib/my_printf/lib/my/my_getstr.c 		\

all:
		$(MAKE) -C solver
		$(MAKE) -C generator

.PHONY: clean

clean:
		rm -f $(OBJ)
		$(MAKE) clean -C solver/
		$(MAKE) clean -C generator/

fclean: 	clean
		rm -f $(NAME)
		$(MAKE) fclean -C solver/
		$(MAKE) fclean -C generator/

re: fclean all
	$(MAKE) re -C solver/
	$(MAKE) re -C generator/

.SILENT:
