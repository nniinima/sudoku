/**
 * @Author: nniinima
 * @Date:   2020-02-15T20:13:35+02:00
 * @Last modified by:   nniinima
 * @Last modified time: 2020-02-15T21:04:04+02:00
 */

#include "sudoku.h"

void    ft_print_sudoku(int **sudoku)
{
    int i;
    int j;

    printf("");
    i = 0;
    while (i < 9)
    {
        j = 0;
        while (j < 9)
        {
            printf(" %d ", sudoku[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
