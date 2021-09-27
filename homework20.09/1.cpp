#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a >= 100 && a < 1000)
		std::cout << "True";
	else
		std::cout << "False";
	return 0;
}
