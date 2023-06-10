/*
** EPITECH PROJECT, 2023
** perfect
** File description:
** maze
*/

#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../../include/my.h"
#include "../../include/structure.h"

int perfect_maze(char **argv, param_t *param, int argc)
{
    int start_row = 0;
    int start_col = 0;
    srand(time(NULL));
    param->maze = NULL;

    param->maze = initialize_maze(param);
    generate_from_random(start_row, start_col, param);
    if (argc == 3)
        param->maze = put_random_wall_on_side(param->maze, param);
    param->maze = if_stuck_beg(param->maze);
    print_maze(param->maze, param);
    all_free(param->maze, param->rows + 1);
    free(param);
    return 0;
}
