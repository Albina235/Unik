#include <iostream>

int	ft_fib(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	return (ft_fib(n - 1) + ft_fib(n - 2));
}

int	main()
{
	int	nb;
	
	std::cin >> nb;
	if (nb < 46)
		std::cout << "error\n";
	std::cout << ft_fib(nb) << "\n";
}
