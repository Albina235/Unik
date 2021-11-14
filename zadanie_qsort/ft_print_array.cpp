#include <iostream>

void	ft_print_array(int *array, const int size)
{
	int	i = 0;

	while (i < size)
	{
		std::cout << array[i] << " ";
		i++;
	}
	std::cout << "\n";
}
