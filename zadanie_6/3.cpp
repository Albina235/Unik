#include <iostream>
# define I 3
# define J 3

void    ft_cinarray(int **arr)
{
    int i = -1;
    int j = -1;

    while (++i < I)
    {
        while (++j < J)
            std::cin >> arr[i][j];
        j = -1;
    }
}


void    ft_chaenge(int **arr)
{
    int tmp;

    for (int i = 0; i < I - 1; i++)
    {
        for (int j = 0; j < I - i; j++)
        {
            tmp = arr[i][j];
            arr[i][j] = arr[I - j - 1][I - i - 1];
            arr[I - j - 1][I - i - 1] = tmp;
        }
    }
}

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

int main()
{
    int **arr = new int *[I];
    int i = -1;
    while (++i < I)
        arr[i] = new int [J];
    ft_cinarray(arr);
    ft_print_array(arr, I, J);
    ft_chaenge(arr);
    ft_print_array(arr, I, J);
    i = -1;
    while (++i < I)
        delete (arr[i]);
    delete (arr);
    return (0);
}