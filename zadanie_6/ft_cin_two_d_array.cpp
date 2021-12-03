#include <iostream>

void    ft_cinarray(int **arr, int si, int sj)
{
    int i = -1;
    int j = -1;

    while (++i < si)
    {
        while (++j < sj)
            std::cin >> arr[i][j];
        j = -1;
    }
}