#include <iostream>
#define SIZE_I 3
#define SIZE_J 3

void    ft_print_two_d_array(int **arr, int size_i, int size_j);
void    ft_cinarray(int **arr, int size_i, int size_j);
void    ft_delete(int **arr, int si);

int **ft_create_new(int **arr, int mini, int minj)
{
    int i = 0;
    int j = 0;
    int k = -1;
    int s = -1;
    int **newarr = new int *[SIZE_I - 1];
    
    while (++s < SIZE_I - 1)
        newarr[s] = new int [SIZE_J - 1];
    s = -1;
    while (++k < SIZE_I)
    {
        while (++s < SIZE_J)
        if (k != mini && s != minj)
        {
            newarr[i][j] = arr[k][s];
            j++;
        }
        s = -1;
        if (k != mini)  i++;
        j = 0;
    }
    return (newarr);
}

int **ft_find_min(int **arr)
{
    int i = -1;
    int j = -1;
    int mini = 0;
    int minj = 0;
    int min = 200000000;

    while (++i < SIZE_I)
    {
        while (++j < SIZE_J)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                mini = i;
                minj = j;
            }
        }
        j = -1;
    }
    return (ft_create_new(arr, mini, minj));
}

int main()
{
    int **arr = new int *[SIZE_I];
    int **tmp;
    int i = -1;

    while (++i < SIZE_I)
        arr[i] = new int [SIZE_J];
    std::cout << "Filling up an array :\n";
    ft_cinarray(arr, SIZE_I, SIZE_J);
    ft_print_two_d_array(arr, SIZE_I, SIZE_J);
    tmp = ft_find_min(arr);
    ft_print_two_d_array(tmp, SIZE_I - 1, SIZE_J - 1);
    ft_delete(arr, SIZE_I);
    ft_delete(tmp, SIZE_I - 1);
    return (0); 
}