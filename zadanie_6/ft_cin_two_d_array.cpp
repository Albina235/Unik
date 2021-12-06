#include <iostream>

void    ft_cinarray(int **arr, int size_i, int size_j)
{
    int i = -1;
    int j = -1;

    while (++i < size_i)
    {
        while (++j < size_j)
            std::cin >> arr[i][j];
        j = -1;
        std::cout << "\n";
    }
    std::cout << "\n";
}