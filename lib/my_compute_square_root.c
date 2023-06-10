/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** Write a function that returns the square root
*/
int my_compute_square_root(int nb)
{
    int i = 0;
    int j = 0;

    while (j != nb) {
        i ++;
        j = i * i;
        if (i == 46341 || i < 0) {
            return (0);
        }
        if (j == nb) {
            break;
        }
    }
    return (i);
}
