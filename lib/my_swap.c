/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** swap the content a & b
*/
void my_swap(int *a, int *b)
{
    int d;

    d = *a;
    *a = *b;
    *b = d;
}
