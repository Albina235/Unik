#include <iostream>
#include <ctime>
#include <iostream>

void	ft_print_array(int *buff, const int size);

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


int main()
{
	int	*buff;
	int	size;
	int	i = 0;
	int	n;

	srand(time(0));
	std::cout << "Namber ";
	std::cin >> size;

	buff = new int[size];
	while (i < size)
	{
		n = 1 + rand() % size;
		if (ft_exist(buff, i , n))
		{
			buff[i] = n;
			i++;
		}
	}
	ft_print_array(buff, (const int)size);
	return (0);
}
