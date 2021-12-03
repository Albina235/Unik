#include <iostream>
# define I_1 2
# define J_1 2
# define I_2 2
# define J_2 2

void    ft_print_array(int **arr, int si, int sj);
void    ft_cinarray(int **arr, int si, int sj);

int **ft_multiplication(int **arr1, int **arr2)
{
    int **mult = new int *[I_1];
    int i = -1;
    int j = -1;

    while (++i < I_1)
        mult[i] = new int [J_2];
    for (i = 0; i < I_1; i++)
    {
        for(j = 0; j < J_2; j++)
        {
            mult[i][j] = 0;
            for (int k = 0; k < J_1; k++)
                mult[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
    return (mult);
}

void    ft_delete(int **arr, int si)
{
    int i = -1;

    while (++i < si)
        delete (arr[i]);
    delete (arr);
}

int main()
{
    int i = -1;
    int j = -1;
    int **arr1;
    int **arr2;
    int **tmp;

    if (J_1 != I_2)
    {
        std::cout << "error\n";
        return (1);
    }
    arr1 = new int *[I_1];
    arr2 = new int *[I_2];
    while (++i < I_1)
        arr1[i] = new int [J_1];
    while (++j < I_2)
        arr2[j] = new int [J_2];
    ft_cinarray(arr1, I_1, J_1);
    ft_cinarray(arr2, I_2, J_2);
    ft_print_array(arr1, I_1, J_1);
    ft_print_array(arr2, I_2, J_2);
    tmp = ft_multiplication(arr1, arr2);
    ft_print_array(tmp, I_1, J_2);
    ft_delete(arr1, I_1);
    ft_delete(arr2, I_2);
    ft_delete(tmp, I_1);
    return (0);
}