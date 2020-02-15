/**
 * @Author: nniinima
 * @Date:   2020-02-15T23:12:50+02:00
 * @Last modified by:   nniinima
 * @Last modified time: 2020-02-15T23:25:26+02:00
 */

 #include "sudoku.h"

ft_check_sudoku(square ***loc)
{
    int i;
    int j;
    i = 0;
    while (i < global_size_lines)
    {
        j = 0;
        while (j < global_size_columns)
        {
            if (loc[i][j] -> solvable == 1)
            {
                ft_solve_square(loc[i][j]);
                ft_update_sudoku(loc, i, j);
            }
            j++;
        }
        i++;
    }
}
