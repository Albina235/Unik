void	ft_bubblesort(int *buff, int size)
{
	int	i = 0;
	int	j = 0;
	int	c;

	while (i < size - 1)
	{
		j = size - 2;
		while (j >= i)
		{
			if (buff[j] > buff[j + 1])
			{
				c = buff[j];
				buff[j] = buff[j + 1];
				buff[j + 1] = c;
			}
			j--;
		}
		i++;
	}
}
