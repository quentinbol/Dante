/*
** EPITECH PROJECT, 2022
** my_find_prime_sup.c
** File description:
** Write a function that returns the smallest prime number
** that is greater han, or equal to, the number given as a parameter.
*/
int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i;
    int j = nb;
    int k = 0;
    i = my_is_prime(nb);
    if (i == 1) {
        return (nb);
    } else {
        while (k != 1) {
            j ++;
            k = my_is_prime(j);
        }
        return (j);
    }
}
