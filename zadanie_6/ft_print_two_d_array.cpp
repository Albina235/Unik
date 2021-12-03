#include <iostream>

void    ft_print_array(int **arr, int si, int sj)
{
    for(int i = 0; i < si; ++i)
    {
        for(int j = 0; j < sj; ++j)
        {
            std::cout.width(3);
            std::cout << arr[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}