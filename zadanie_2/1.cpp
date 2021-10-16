#include <cstdlib>
#include <ctime>
#include <iostream>


int	main()
{
	int	c;

	srand(static_cast<unsigned int>(time(0)));

	c = 1 + rand() % 6;
	std::cout << c << "\n";
	c = 1 + rand() % 6;
	std::cout << c;
	return (0);
}
