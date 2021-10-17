#include <iostream>

int	ft_printnb(int nb)
{
	if (nb != 0)
	{
		ft_printnb(nb / 10);
		std::cout << nb % 10 << " ";
	}
	return (0);
}

int	main()
{
	int	nb;

	std::cin >> nb;
	ft_printnb(nb);
	return (0);
}

