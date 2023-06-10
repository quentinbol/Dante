/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** my_strcat
*/
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = my_strlen(dest) - my_strlen(src);

    while (i != my_strlen(src)) {
        dest[j + i] = src[i];
        i ++;
    }
    return (dest);
}
