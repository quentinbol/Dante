/*
** EPITECH PROJECT, 2022
** my_getstr.c
** File description:
** int to str
*/

void getstrtwo(int nb, char *tab)
{
    int i;
    int quot = 1000000000;

    i = 1;
    for (int digit = 0; digit == 0;) {
        digit = (nb / quot) % 10;
        quot = quot / 10;
    }
    quot = quot * 10;
    tab[i++] = ((nb / quot) % 10) + 48;
    for (; quot != 1; i ++) {
        quot = quot / 10;
        tab[i] = 48 + ((nb / quot) % 10);
    }
    tab[i] = '\0';
}

void my_getstr(int nb, char *tab)
{
    if (nb < 0) {
        tab[0] = '-';
        nb = nb * -1;
    } else {
        tab[0] = '+';
    }
    if (0 <= nb && nb < 10) {
        tab[1] = nb + 48;
        tab[2] = '\0';
    } else {
        getstrtwo(nb, tab);
    }
}
