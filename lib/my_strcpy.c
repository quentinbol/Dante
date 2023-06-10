/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** copy a string
*/
char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return (0);
}
