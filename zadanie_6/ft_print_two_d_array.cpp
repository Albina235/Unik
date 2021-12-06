#include <iostream>

void    ft_print_two_d_array(int **arr, int size_i, int size_j)
{
    for(int i = 0; i < size_i; ++i)
    {
        for(int j = 0; j < size_j; ++j)
        {
            std::cout.width(3);
            std::cout << arr[i][j];
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}