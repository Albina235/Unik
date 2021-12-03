#include <iostream>
# define SIZE_I 3
# define SIZE_J 3

void    ft_print_array(int **arr, int si, int sj);
void    ft_cinarray(int **arr, int si, int sj);

int **ft_del_array_and_create_new(int **arr, int mini, int minj)
{
    int i = -1;
    int **newarr;
    int j = 0;
    int k = -1;
    int s = -1;

    newarr = new int *[SIZE_I - 1];
    while (++i < SIZE_I - 1)
    {
        newarr[i] = new int [SIZE_J - 1];
    }
    i = 0;
    while (++k < SIZE_I)
    {
        while (++s < SIZE_J)
        {
            if (k != mini && s != minj)
            {
                newarr[i][j] = arr[k][s];
                j++;
            }
        }
        s = -1;
        if (k != mini)
            i++;
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
    int min = 20000000;

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
    return (ft_del_array_and_create_new(arr, mini, minj));
}

int main()
{
    int **arr = new int *[SIZE_I];
    int i = -1;
    int **tmp;

    while (++i < SIZE_I)
        arr[i] = new int [SIZE_J];
    std::cout << "Filling up an array : \n";
    ft_cinarray(arr, SIZE_I, SIZE_J);
    ft_print_array(arr, SIZE_I, SIZE_J);
    tmp = ft_find_min(arr);
    ft_print_array(tmp, SIZE_I - 1, SIZE_J - 1);
    i = -1;
    while (++i < SIZE_I - 1)
    {
        delete (arr[i]);
        if (i < SIZE_I - 1)
            delete (tmp[i]);
    }
    delete(arr);
    delete(tmp);
    return (0);
}