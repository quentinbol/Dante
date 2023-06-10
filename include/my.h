/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Write your my.h header file that contains the prototypes
** of all the functions exposed
*/

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../lib/my_printf/include/my.h"
#include "structure.h"

#ifndef LIB_H_
    #define LIB_H_

    void free_stack(param_t *param);
    char **initialize_maze(param_t *param);
    int** init_stack(param_t *param);
    char **put_random_wall_on_side(char **maze, param_t *param);
    void print_maze(char **maze, param_t *param);
    int **random_directions(param_t *param, int **directions);
    int **initialize_direction(int **directions);
    void generate_maze(int row, int col, int *directions, param_t *param);
    void generate_from_random(int start_row, int start_col, param_t *param);
    char **initialize_maze(param_t *param);
    char **if_stuck_beg(char **maze);
    int perfect_maze(char **argv, param_t *param, int argc);

    int linelen(char const *str, int i);
    void all_free (char **tab, int count);
    char *my_strstr(char *str, char const *to_find);
    int my_isneg(int nb);
    int my_strcmp(char const *s1, char const *s2);
    int my_put_nbr(int nb);
    int my_strncmp(char const *s1, char const *s2, int n);
    void my_swap(int *a, int *b);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_getnbr(char const *str);
    int my_str_isalpha(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_str_isnum(char const *str);
    int my_compute_power_rec(int nb, int power);
    int my_str_islower(char const *str);
    int my_compute_square_root(int nb);
    int my_str_isupper(char const *str);
    int my_is_prime(int nb);
    int my_str_isprintable(char const *str);
    int my_find_prime_sup(int nb);
    int my_showstr(char const *str);
    char *my_strcpy(char *dest, char const *src);
    int my_showmem(char const *str, int size);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strcat(char *dest, char const *src);
    char *my_revstr(char *str);
    char **my_str_to_word_array(char const *str, char c);
    char *my_strncat(char *dest, char const *src, int nb);
    char **my_tab_str_copy(char **buff, char **tab);

#endif /* MY_H_ */
