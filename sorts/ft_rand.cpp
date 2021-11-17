#include <cstdlib>
#include <ctime>

void	ft_rand(int *buff, int size)
{
	int i = 0;
	
	srand(time(0));
	while (i < size)
	{
		buff[i] = 1 + rand() % 1000;
		i++;
	}
}	
