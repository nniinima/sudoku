/**
 * @Author: nniinima
 * @Date:   2020-02-15T20:04:14+02:00
 * @Last modified by:   nniinima
 * @Last modified time: 2020-02-15T21:03:18+02:00
 */

#include "sudoku.h"

int     **ft_create_sudoku()
{
    int **sudoku;
    int i;
    int j;

    int array[9][9] =  {0, 6, 0,  1, 0, 0,  4, 0, 0,
                        0, 0, 5,  0, 0, 0,  0, 0, 0,
                        9, 2, 0,  3, 4, 7,  5, 6, 0,

                        6, 0, 2,  0, 1, 3,  0, 8, 0,
                        8, 0, 1,  0, 9, 0,  0, 5, 7,
                        0, 0, 0,  0, 0, 2,  0, 1, 0,

                        1, 5, 0,  4, 0, 9,  0, 3, 2,
                        3, 0, 0,  0, 8, 1,  7, 4, 0,
                        0, 0, 4,  7, 0, 5,  0, 9, 0 };

    sudoku = (int**)malloc(sizeof(int*)*9 + 1);

    i = 0;
    while (i < 9)
    {
        sudoku[i] = (int*)malloc(sizeof(int)*9 + 1);

        j = 0;
        while (j < 9)
        {
            sudoku[i][j] = array[i][j];
            j++;
        }
        i++;
    }
    return (sudoku);
}
