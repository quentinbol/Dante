/*
** EPITECH PROJECT, 2023
** generator
** File description:
** dante
*/

#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/structure.h"
#include <sys/resource.h>

void print_maze(char **maze, param_t *param)
{
    maze[0][0] = '*';
    maze[param->rows][param->cols] = '*';
    maze[param->rows - 1][param->cols] = '\0';
    for (int i = 0; i < param->rows - 1; i++) {
        write(1, maze[i], param->cols);
        write(1, "\n", 1);
    }
    write(1, maze[param->rows - 1], param->cols);
}

int	num_check(char *argv)
{
    int i = 0;
    if (argv[i] == '-')
        i++;
    for (; argv[i] != '\0';) {
        if (argv[i] >= '0' && argv[i] <= '9')
            i++;
        else {
            return 84;
        }
    }
    return 0;
}

int error_handling(int argc, char **argv, param_t *param)
{
    if (argc > 2) {
        param->cols = atoi(argv[1]);
        param->rows = atoi(argv[2]);
    } else {
        write(2, "not enough arguments\n", 21);
        return 84;
    }
    return 0;
}

int main(int argc, char **argv)
{
    param_t *param = malloc(sizeof(param_t));

    if (error_handling(argc, argv, param) != 0)
        return 84;
    if (param->rows <= 1 || param->cols <= 1)
        return 84;
    if (num_check(argv[1]) != 0 || num_check(argv[2]) != 0)
        return 84;
    if (argc == 3) {
            perfect_maze(argv, param, argc);
            return 0;
    }
    if (argc == 4) {
        if (strcmp(argv[3], "perfect") == 0) {
            perfect_maze(argv, param, argc);
            return 0;
        }
    }
    return 84;
}
