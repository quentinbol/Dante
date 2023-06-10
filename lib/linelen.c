/*
** EPITECH PROJECT, 2022
** linelen.c
** File description:
** count size line
*/

int linelen(char const *str, int i)
{
    int j = 0;

    while (str[i] != '\n') {
        i ++;
        j ++;
    }
    return j;
}
