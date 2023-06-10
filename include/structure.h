/*
** EPITECH PROJECT, 2023
** struct
** File description:
** struct for function
*/

#ifndef struct_y
    #define struct_y

typedef struct param_s {
    int total;
    int rows;
    int cols;
    int row;
    int col;
    int j;
    int temp_row;
    int temp_col;
    int next_row;
    int next_col;
    int start_row;
    int start_col;
    char **maze;
    int **stack;
    int top;
    int found_next;
}param_t;

#endif /* struct */
