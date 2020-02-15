/**
 * @Author: nniinima
 * @Date:   2020-02-15T23:31:01+02:00
 * @Last modified by:   nniinima
 * @Last modified time: 2020-02-15T23:31:01+02:00
 */

#include "sudoku.h"

int ft_square(square *square)
{
    int x;

    x = 0
    while (x < global_size_lines)
    {
        if (square -> possible[x] == 0)
        {
            square -> num = x + 1;
            square -> solvable = 0;
            global_unsolved--;
        }
        x++;
    }
}
