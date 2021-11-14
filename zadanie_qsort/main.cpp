#include <iostream>
#include <cmath>
#include <ctime>

void	ft_print_array(int *array, const int size);
void	ft_qsort(int *arr, int left, int right);

int main()
{
	int	*buff;
	int	size;
	int	i = 0;

	srand(time(0));
	std::cout << "Buffer size: ";
	std::cin >> size;

	buff = new int[size];
	while (i < size)
	{
		buff[i] = 0 + rand() % 1000;
		i++;
	}
	ft_print_array(buff, (const int)size);
	ft_qsort(buff, 0, size - 1);
	ft_print_array(buff, size);
	delete buff;
	return (0);
}
