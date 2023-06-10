/*
** EPITECH PROJECT, 2023
** clean.c
** File description:
** free char**
*/
#include <stdlib.h>

void all_free (char **tab, int count)
{
    for (int i = 0; i != count; i++)
        free(tab[i]);
    free(tab);
}
