#include <iostream>

int	ft_sumdi(int nb)
{
	int	count = 0;
	int	b = 1;

	while (b <= nb / 2)
	{
		if (nb % b == 0)
			count += b;
		b++;
	}
	return (count);
}

int main()
{
	int	i = 1;
	int	j = 1;
	int	c;

	while (i < 10000)
	{
		j = i;
		c = ft_sumdi(i);
		while (j < 10000)
		{
			if (i != j && c == j && ft_sumdi(j) == i)
			{
				std::cout << i << " " << j << "\n";
				break;
			}
			j++;
		}
		i++;
	}
	return (0);
}

