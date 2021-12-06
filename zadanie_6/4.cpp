#include <iostream>

void    ft_print_two_d_array(int **arr, int size_i, int size_j);
void    ft_cinarray(int **arr, int size_i, int size_j);
void    ft_delete(int **arr, int si);

void    ft_replace(int **arr, int mini, int minj, int n)
{
    int i = -1;
    int i_s[n];
    int j_s[n];

    while (++i < n)
    {
        i_s[i] = arr[mini][i];
        j_s[i] = arr[i][minj];
    }
    i = -1;
    while (++i < n)
    {
        arr[mini][i] = j_s[i];
        arr[i][minj] = i_s[i];
    }
}

void    ft_find_min(int  **arr, int n)
{
    int i = -1;
    int j = -1;
    int mini = 0;
    int minj = 0;
    int min = 20000000;

    while (++i < n)
    {
        while (++j < n)
        {
            if (arr[i][j] < min && arr[i][j] >= 0)
            {
                min = arr[i][j];
                mini = i;
                minj = j;
            }
        }
        j = -1;
    }
    ft_replace(arr, mini, minj, n);
}

int **ft_create_arr(const int n)
{
    int i = -1;
    int **arr = new int *[n];

    while (++i < n)
        arr[i] = new int[n];
    ft_cinarray(arr, n, n);
    ft_print_two_d_array(arr, n, n);
    ft_find_min(arr, n);
    return (arr);
}

int main()
{
    int n;
    int **arr;

    std::cout << "Number of rows and columns: ";
    std::cin >> n;

    arr = ft_create_arr((const int)n);
    ft_print_two_d_array(arr, n, n);
    int i = -1;
    while (++i < n)
        delete (arr[i]);
    delete (arr);
    return (0);
}