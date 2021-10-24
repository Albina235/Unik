#include <iostream>

void	ft_print_array(int *array, const int size);

int main()
{
	int	*buff;
	int	size;
	int	a1;
	int	d;
	int	i = 0;

	std::cout << "Buff size ";
	std::cin >> size;
	std::cout << "First element ";
	std::cin >> a1;
	std::cout << "Step ";
	std::cin >> d;

	buff = new int[size];
	while (i < size)
	{
		buff[i] = a1 + i * d;
		i++;
	}
	ft_print_array(buff, (const int)size);
	return (0);
}
