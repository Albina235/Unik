#include <iostream>
#include <ctime>
#include <cstdlib>

void	ft_print_array(int *buff, const int size);

int	ft_count_even(int *buff, const int size)
{
	int	i = 0;
	int	count = 0;
	while (i < size)
	{
		if (buff[i] / 10 % 2 == 0)
			count++;
		i++;
	}
	return (count);
}

int main()
{
	int	*buff;
	int	i = 0;
	int	size;
	int	count;

	srand(time(0));
	std::cout << "Buff size ";
	std::cin >> size;
	buff = new int[size];
	while (i < size)
	{
		buff[i] = 1000 + rand() % 1001;
		i++;
	}
	ft_print_array(buff, (const int)size);
	count = ft_count_even(buff, (const int)size);
	std::cout << "\n" << count;
	delete buff;
	return (0);
}
