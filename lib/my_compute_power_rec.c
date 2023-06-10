/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** write an recursive function
*/
int rec(int nb, int p)
{
    int a;

    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    if (p == 1) {
        return (nb);
    }
    a = nb * rec(nb, p - 1);
    return (a);
}

int my_compute_power_rec(int nb, int p)
{
    int result;

    result = rec(nb, p);
    return (result);
}
