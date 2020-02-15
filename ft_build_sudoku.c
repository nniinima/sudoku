/**
 * @Author: nniinima
 * @Date:   2020-02-15T22:58:41+02:00
 * @Last modified by:   nniinima
 * @Last modified time: 2020-02-15T23:11:37+02:00
 */

#include "sudoku.h"

square ***ft_build_sudoku (int **sudoku)
{
    square  ***loc;
    int     i;
    int     j;
    int     x;

    loc = (square***)malloc(sizeof(square**)*9 + 1);
    /*loop through lines*/
    i = 0;
    while (i < global_size_lines)
    {
        loc[i] = (square**)malloc(sizeof(square*)*9 + 1);
        /*loop through columns*/
        j = 0;
        while (j < global_size_columns)
        {
            loc[i][j] = (square*)malloc(sizeof(square)*9 + 1);
            loc[i][j] -> num = sudoku[i][j];
            loc[i][j] -> line = i;
            loc[i][j] -> column = j;
            x = 0;
            while (x < global_size_lines)
            {
                loc[i][j] -> possible[x] = 0;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < global_size_lines)
    {
        j = 0;
        while (j < global_size_columns)
        {
            if (loc[i][j] -> num != 0)
            sudoku[i][j] -> solvable = 0;
            ft_update_sudoku(loc, i, j)
            global_unsolved--;
            j++;
        }
        i++;
    }
}
