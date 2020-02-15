/**
 * @Author: nniinima
 * @Date:   2020-02-15T22:58:41+02:00
 * @Last modified by:   nniinima
 * @Last modified time: 2020-02-15T23:11:37+02:00
 */

#include "sudoku.h"

int     ft_update_sudoku(square ***loc, int line, int column)
{
    int x;
    int number = sudoku[row][column] -> number;

    x = 0;
    while(x < global_size_lines)
    {
        if (loc[x][column] -> possible[number] == 0)
        sudoku[x][column] -> solvable--;
    sudoku[x][column] -> possible[number -1] = 1;
    }
    x = 0;
    while(x < global_size_columns)
    {
        if (loc[x][line] -> possible[number] == 0)
        sudoku[x][line] -> solvable--;
    sudoku[x][line] -> possible[number -1] = 1;
    }
    return (1);
}
