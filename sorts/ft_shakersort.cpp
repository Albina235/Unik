void	ft_shakersort(int *buff, int size)
{
	int	left = 1;
	int right = size - 1;
	int	i;
	int	c;

	while (left <= right)
	{
		i = right;
		while (i >= left)
		{
			if (buff[i - 1] > buff[i])
			{
				c = buff[i - 1];
				buff[i - 1] = buff[i];
				buff[i] = c;
			}
			i--;
		}
		left++;
		i = left;
		while (i <= right)
		{
			if (buff[i - 1] > buff[i])
			{
				c = buff[i - 1];
				buff[i - 1] = buff[i];
				buff[i] = c;
			}
			i++;
		}
		right--;
	}
}
