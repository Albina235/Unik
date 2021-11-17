#include <iostream>
#include <cmath>
#include <ctime>

void	ft_bubblesort(int *buff, int size);
void	ft_shakersort(int *buff, int size);
void	ft_rand(int *buff, int size);
void	ft_print_array(int *buff, int size);

int main()
{
	int	*buff;
	int	size;

	std::cout << "Buffer size ";
	std::cin >> size;
	
	srand(time(0));
	buff = new int[size];
	ft_rand(buff, size);
	ft_print_array(buff, size);
/*             bubble sort             */
	std::cout << "bubble sort:\n";
	ft_rand(buff, size);
	ft_bubblesort(buff, size);
	ft_print_array(buff, size);
/*             shaker sort              */
	std::cout << "shaker sort:\n";
	ft_rand(buff, size);
	ft_print_array(buff, size);
	ft_shakersort(buff, size);
	ft_print_array(buff, size);
/*                                      */
	delete buff;
}
