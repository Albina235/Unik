#include <iostream>

void	ft_prost(int nb)
{
	int	del;

	del = 2;
	if (nb < -1)
	{
		std::cout << "-";
		return (ft_prost(-nb));
	}
	if (nb < 2)
		return ;
	while (nb % del != 0)
		del++;
	std::cout << del << " ";
	ft_prost(nb / del);
}

int main()
{
	int	nb;

	std::cin >> nb;
	if (nb == 1 || nb == 0 || nb == -1)
	{
		std::cout << nb << "\n";
		return (0);
	}
	ft_prost(nb);
	return (0);
}
