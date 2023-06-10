/*
** EPITECH PROJECT, 2023
** my_str_to_word_array.c
** File description:
** char* in char**
*/
#include <stdlib.h>

static int count(char const *str, char c)
{
    int a = 1;
    int i = 0;

    while (str[i] == c)
        i ++;
    for (; str[i]; i++)
        if (str[i] == c && str[i - 1] != c)
            a++;
    return a;
}

static int str_index_of(char const *str, char to_find, int i)
{
    for (; str[i]; i++)
        if (to_find == str[i])
            break;
    return i;
}

static int len_c(char const *str, char c, int i)
{
    int j = 0;

    for (; str[i] != '\0' && str[i] != c; i ++)
        j ++;
    return j;
}

char *my_str_cpy(char *s2, char const *s1, char c, int i)
{
    int j = 0;
    int len = len_c(s1, c, i);

    for (; s1[i] != '\0' && s1[i] != c; i++) {
        s2[j] = s1[i];
        j ++;
    }
    s2[len] = '\0';
    return s2;
}

char **my_str_to_word_array(char const *str, char c)
{
    int nb_word = count(str, c);
    int y = 0;
    int index = 0;
    char **tab = malloc(sizeof(char *) * (nb_word + 1));
    int i = 0;

    while (str[i] == c)
        i ++;
    for (; str[i]; i++) {
        index = str_index_of(str, c, i);
        tab[y] = malloc(sizeof(char) * (index + 1));
        tab[y] = my_str_cpy(tab[y], str, c, i);
        i = index + 1;
        while (str[i] == c && str[i])
            i ++;
        i --;
        y++;
    }
    tab[y] = NULL;
    return tab;
}
