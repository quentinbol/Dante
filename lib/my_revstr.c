/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** Write a function that reverses a string
*/
void my_putchar(char c);

int my_putstr(char const *str);

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = 0;
    int j;
    int k = my_strlen(str);

    if ( k % 2 == 0) {
        my_putchar(65);
    }
    while ( i == j) {
        j = str[i];
        str[i] = str[k];
        str[k] = j;
        i ++;
        k --;
    }
}
