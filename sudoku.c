/**
 * @Author: nniinima
 * @Date:   2020-02-15T19:57:37+02:00
 * @Last modified by:   nniinima
 * @Last modified time: 2020-02-15T22:24:03+02:00
 */

#include "sudoku.h"

int global_unsolved = 81;
int global_size_lines = 9;
int global_size_columns = 9;

int main()
{
    int     **sudoku;
    square  ***loc;

    sudoku = ft_create_sudoku();

    ft_print_sudoku(sudoku);

    ft_build_sudoku(sudoku);

    ft_check_sudoku(sudoku);

    return (0);
}
