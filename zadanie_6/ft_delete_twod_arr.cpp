void    ft_delete(int **arr, int si)
{
    int i = -1;

    while (++i < si)
        delete (arr[i]);
    delete (arr);
}