/**
 * @Author: nniinima
 * @Date:   2020-02-15T20:01:55+02:00
 * @Last modified by:   nniinima
 * @Last modified time: 2020-02-16T00:04:15+02:00
 */

#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>
#include <stdlib.h>

extern int global_unsolved;
extern int global_size_lines;
extern int global_size_columns;

typedef struct box
{
    struct box * next;
} box;

typedef struct square
{
    int     num;
        /*  [0][0][0][0][0][0][0][0][0]
            [9][8][7][6][5][4][3][2][1] */
    int     possible[9];
    int     solvable;
    box     *inbox;
    int     line;
    int     column;
} square;

int     **ft_create_sudoku();
void    ft_print_sudoku();
square  ***ft_build_sudoku (int**);

#endif
