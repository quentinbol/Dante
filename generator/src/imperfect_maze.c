/*
** EPITECH PROJECT, 2023
** generator
** File description:
** dante
*/

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/structure.h"

char **print_random_empty(char **maze, int i, param_t *param)
{
    int random3 = rand() % (param->rows / 2);
    if (random3 > param->rows / 2)
        maze[i][0] = 'K';
    return maze;
}

void if_random(int random2, char **maze, int i, int j)
{
    random2 = rand() % (6);
    if (random2 == 5)
        maze[i][j] = '*';
}

char **put_random_wall_on_side(char **maze, param_t *param)
{
    int random = 0;
    int random2 = 0;

    for (int i = 0; i < param->rows; i++) {
        random2 = rand() % (param->rows - 1) + 1;
        maze[random2][0] = '*';
        if (i >= param->rows / 2) {
            maze = print_random_empty(maze, i, param);
        }
    }
    for (int j = 0; j < param->cols; j++) {
        random = rand() % (param->cols);
            maze[0][random] = '*';
    }
    for (int i = 0; i < param->rows; i++) {
        for (int j = 0; j != param->cols; j++) {
            if_random(random, maze, i, j);
        }
    }
    return maze;
}
