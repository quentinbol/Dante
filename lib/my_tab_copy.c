/*
** EPITECH PROJECT, 2023
** my_str_copy.c
** File description:
** copy str to an other str
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_str_dup(char *s1)
{
    char *s2 = malloc(sizeof(char) * (my_strlen(s1) + 1));

    for (int i = 0; s1[i]; i++)
            s2[i] = s1[i];
    s2[my_strlen(s1)] = '\0';
    return s2;
}

char **my_tab_str_copy(char **buff, char **tab)
{
    int count = 0;

    for (; buff[count]; count++);
    tab = malloc(sizeof(char *) * (count + 1));
    for (int i = 0; buff[i]; i ++)
        tab[i] = my_str_dup(buff[i]);
    return tab;
}
