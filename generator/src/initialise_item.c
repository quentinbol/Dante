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

char **initialize_maze(param_t *param)
{
    param->maze = calloc(param->rows + 1, sizeof(char *));
    for (int i = 0; i != param->rows + 1; i++) {
        param->maze[i] = calloc(param->cols + 1, sizeof(char));
    }
    for (int i = 0; i < param->rows; i++) {
        for (int j = 0; j < param->cols; j++) {
            param->maze[i][j] = 'X';
        }
    }
    return param->maze;
}

int** init_stack(param_t *param)
{
    int **stack = NULL;
    stack = (int **) malloc (param->rows * param->cols * sizeof(int *));
    for (int i = 0; i < param->rows * param->cols; i++)
        stack[i] = (int *)malloc(2 * sizeof(int));
    return stack;
}

void free_stack(param_t *param)
{
    for (int i = 0; i != param->rows * param->cols; i++)
        free(param->stack[i]);
    free(param->stack);
}
