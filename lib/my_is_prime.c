/*
** EPITECH PROJECT, 2022
** my_is_prime.c
** File description:
** Write a function that returns 1 if the number is prime and 0 if not.
*/
int my_is_prime(int nb)
{
    int i = 1;
    if (nb == 0 || nb == 1 || nb == 0) {
        return (0);
    }
    while (nb != i) {
        if (nb % i == 0 && i != 1) {
            return (0);
        }
        i++;
    }
    return (1);
}
