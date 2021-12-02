#include <iostream>
# define SIZE_I 3
# define SIZE_J 3

void    ft_cinarray(int **arr)
{
    int i = -1;
    int j = -1;
    //std::cout << "test\n";
    while (++i < SIZE_I)
    {
        std::cout << "test\n";
        while (++j < SIZE_J)
        {
            std::cin >>  arr[i][j];
            std::cout << i << j << "\n" << arr[i][j] << "\n";
        }
        //std::cout << arr[i - 1];
        j = -1;
    }
    //std::cout << "test\n";
}

void    ft_del_array_and_create_new(int ***arr, int mini, int minj)
{
    int i = -1;
    int **newarr;
    int j = 0;
    int k = -1;
    int s = -1;

    newarr = new int *[SIZE_I - 1];
    while (++i < SIZE_I - 1)
    {
        newarr[i] = new int [SIZE_J - j];
    }
    i = 0;
    while (++k < SIZE_I)
    {
        while (++s < SIZE_J)
        {
            if (k != mini && s != minj)
            {
                newarr[i][j] = *arr[k][s];
                j++;
            }
        }
        s = -1;
        if (k != mini)
            i++;
        j = 0;
    }
    i = -1;
    while (++i < SIZE_I)
        delete (arr[i]);
    delete (arr);
    *arr = newarr;
}

void    ft_find_and_del_min(int ***arr)
{
    int i = -1;
    int j = -1;
    int mini = 0;
    int minj = 0;
    int min = 20000000;

    while (++i < SIZE_I)
    {
        while (++j < SIZE_J)
        {
            if (*arr[i][j] < min)
            {
                min = *arr[i][j];
                mini = i;
                minj = j;
            }
        }
        j = -1;
    }
    ft_del_array_and_create_new(arr, mini, minj);
}

void    ft_print_array(int **arr)
{
    for(int i = 0; i < SIZE_I; ++i)
    {
        for(int j = 0; j < SIZE_J; ++j)
        {
            std::cout.width(3);
            std::cout << arr[i][j];
        }
        std::cout << "\n";
    }
}

int main()
{
    int **arr = new int *[SIZE_I];
    int i = -1;

    //arr = new int *[SIZE_I];
    while (++i < SIZE_I)
    {
        arr[i] = new int [SIZE_J];
    }
    //int arr[SIZE_I][SIZE_J];
    std::cout << arr[0] << arr[1] << arr[2] << "\n";

    std::cout << "Filling up an array : \n";
    ft_cinarray(arr);
    std::cout << "test\n";
    ft_print_array(arr);
    std::cout << "test\n";
    ft_find_and_del_min(&arr);
    ft_print_array(arr);
}