/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** function that copies n characters from a string into another
*/
char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    for ( ; i < n; i++)
        dest[i] = '\0';
}
