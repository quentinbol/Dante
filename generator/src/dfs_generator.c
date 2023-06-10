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

void generate_from_random(int start_row, int start_col, param_t *param)
{
    static int directions[] = {-1, 0, 1, 0, 0, -1, 0, 1};
    if (param->rows % 2 == 0) {
        start_row = rand() % (param->rows / 2) * 2 + 1;
    } else {
        if (param->rows % 2 != 0)
            start_row = rand() % (param->rows / 2) * 2;
    }
    if (param->cols % 2 == 0)
        start_col = rand() % (param->cols / 2) * 2 + 1;
    else {
        if (param->cols % 2 != 0)
            start_col = rand() % (param->cols / 2) * 2;
    }
    generate_maze(start_row, start_col, directions, param);
}

char **if_stuck_beg(char **maze)
{
    int random4 = 0;
    if (maze[1][0] == 'X' && maze[0][1] == 'X') {
        random4 = rand() % (2);
        if (random4 = 0)
            maze[1][0] = '*';
        else {
            maze[0][1] = '*';
        }
    }
    return maze;
}

void chose_a_direction(param_t *param, int *directions)
{
    for (int i = 0; i < 4; i++) {
        param->j = rand() % 4;
        param->temp_row = directions[i * 2];
        param->temp_col = directions[i * 2 + 1];
        directions[i * 2] = directions[param->j * 2];
        directions[i * 2 + 1] = directions[param->j * 2 + 1];
        directions[param->j * 2] = param->temp_row;
        directions[param->j * 2 + 1] = param->temp_col;
    }
}

void rep_wall(param_t *param, int *directions)
{
    int i = 0;

    while (i < 4 && !param->found_next) {
        param->next_row = param->row + directions[i * 2] * 2;
        param->next_col = param->col + directions[i * 2 + 1] * 2;
        if (param->next_row >= 0 && param->next_row <= param->rows
            && param->next_col >= 0 && param->next_col <= param->cols
            && param->maze[param->next_row][param->next_col] == 'X') {
            param->maze[param->row + directions[i * 2]]
            [param->col + directions[i * 2 + 1]] = '*';
            param->maze[param->row + directions[i * 2] / 2]
            [param->col + directions[i * 2 + 1] / 2] = '*';
            param->maze[param->next_row][param->next_col] = '*';
            param->stack[++param->top][0] = param->next_row;
            param->stack[param->top][1] = param->next_col;
            param->found_next = 1;
        }
        i++;
    }
}

void generate_maze(int row, int col, int *directions, param_t *param)
{
    param->maze[row][col] = '*';
    
    param->top = 0;
    param->stack = init_stack(param);
    param->stack[param->top][0] = row;
    param->stack[param->top][1] = col;
    while (param->top >= 0) {
        param->row = param->stack[param->top][0];
        param->col = param->stack[param->top][1];
        param->found_next = 0;
        chose_a_direction(param, directions);
        rep_wall(param, directions);
        if (!param->found_next) {
            param->top--;
        }
    }
    free_stack(param);
}
