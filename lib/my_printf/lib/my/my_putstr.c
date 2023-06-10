/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Write he characters of a string
*/
void my_putchar(char c);

void my_putstr_len(char const *str, int i)
{
    for (int j = 0; str[i + j] != '\0'; j++)
        my_putchar(str[j]);
}

int my_putstr(char const *str, int i)
{
    for (; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return i;
}
