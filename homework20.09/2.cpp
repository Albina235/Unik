#include <iostream>

int main()
{
	int a, b;
	int c = 365;
	int i, j;

	i = 1;
	j = 0;
	std::cin >> b >> a;
	if (a > 12)
		std::cout << "error";
	while (i < a)
	{
		if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			if (b > 30)
			{
				std::cout << "error";
				return (-1);
			}
			j += 30;
		}
		else if (i == 2)
		{
			if (b > 28 && a == 2)
			{
				std::cout << "error";
				return (-1);
			}
			j += 28;
		}
		else
		{
			if (b > 31)
			{
					std::cout << "error";
					return (-1);
			}
			j+=31;
		}
		i++;
	}
	j += b;
	c = c - j;
	std::cout << c;
	return 0;
}

