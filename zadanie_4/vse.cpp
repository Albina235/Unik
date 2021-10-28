#include <iostream>
#include <ctime>
#include <cstdlib>

void	ft_print_array(int *array, const int size)
{
	int	i = 0;

	while (i < size)
	{
		std::cout << array[i] << " ";
		i++;
	}
}

void	ft_arifmetic(int *buff, int size)
{
	int	a1;
	int	d;
	int	i = 0;

	std::cout << "First element ";
	std::cin >> a1;
	std::cout << "Step ";
	std::cin >> d;

	while (i < size)
	{
		buff[i] = a1 + i * d;
		i++;
	}
	ft_print_array(buff, size);
	std::cout << "\n";
}

int	ft_exist(int *buff, int i, int n)
{
	int	j = 0;

	while (j < i)
	{
		if (buff[j] == n)
			return (0);
		j++;
	}
	return (1);
}

void	ft_rand1(int *buff, int size)
{
	int	i = 0;
	int	n;

	srand(time(0));
	while (i < size)
	{
		n = 1 + rand() % size;
		if (ft_exist(buff, i, n))
		{
			buff[i] = n;
			i++;
		}
	}
	ft_print_array(buff, size);
	std::cout << "\n";
}

int	ft_count_even(int *buff, int size)
{
	int	i = 0;
	int	count = 0;
	while (i < size)
	{
		if (buff[i] / 10 % 2 == 0)
			count ++;
		i++;
	}
	return (count);
}

void	ft_rand2(int *buff, int size)
{
	int	i = 0;
	int	count;

	srand(time(0));
	while (i < size)
	{
		buff[i] = 1000 + rand() % 1001;
		i++;
	}
	count = ft_count_even(buff, size);
	ft_print_array(buff, size);
	std::cout << count;
}

int main()
{
	int	*buff;
	int	size;

	std::cout << "Buffer size ";
	std::cin >> size;

	buff = new int[size];
	ft_arifmetic(buff, size);
	ft_rand1(buff, size);
	ft_rand2(buff, size);
	delete buff;
	return(0);
}
