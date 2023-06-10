/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main for solver dante
*/

#include "../include/base.h"

int main (int argc, char **argv)
{
    struct stat st;
    char *buff;
    char **tab;
    int size;
    int fd;

    if (argc != 2)
        return 84;
    stat(argv[1], &st);
    buff = malloc(sizeof(char) * (st.st_size + 1));
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        return 84;
    size = read(fd, buff, st.st_size);
    buff[size] = '\0';
    close(fd);
    if (size == 1 || size == 0)
        return 84;
    tab = my_str_to_word_array(buff, '\n');
    return 0;
}
