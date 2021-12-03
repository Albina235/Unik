#include <iostream>

void    ft_print_array(int **arr, int si, int sj);
void    ft_cinarray(int **arr, int si, int sj);

int ft_find_max(int **arr, int ni, int sj)
{
    int j = -1;
    int max = -23456789;
    int maxj;

    while (++j < sj)
    {
        if (arr[ni + 1][j] > max)
        {
            max = arr[ni + 1][j];
            maxj = j;
        }
    }
    return (arr[ni + 1][maxj]);

}

void    ft_replace_min(int **arr, int si, int sj)
{
    int i = -1;
    int j = -1;
    int min = 234456789;
    int minj;

    while (++i < si - 1)
    {
        while (++j < sj)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minj = j;
            }
        }
        arr[i][minj] = ft_find_max(arr, i, sj);
        j = -1;
        min = 234567890;
    }
}

int **ft_create_arr(const int i, const int j)
{
    int si = -1;
    int **arr = new int *[i];
    int **tmp;

    while (++si < i)
        arr[si] = new int[j];
    ft_cinarray(arr, i, j);
    ft_print_array(arr, i, j);
    ft_replace_min(arr, i, j);
    return (arr);
}

int main()
{
    int i;
    int j;
    int **arr;

    std::cout << "Number of rows and columns: ";
    std::cin >> i >> j;
    std::cout << "\n";
    arr = ft_create_arr((const)i, (const)j);
    ft_print_array(arr, i, j);
}