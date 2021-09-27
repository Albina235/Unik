#include <iostream>
#include <cmath>

//using namespace std;

void	ft_units(int i)
{
	if (i == 1)
		std::cout << "один ";
	if (i == 2)
		std::cout << "два ";
	if (i == 3)
		std::cout << "три ";
	if (i == 4)
		std::cout << "четыре ";
	if (i == 5)
		std::cout << "пять ";
	if (i == 6)
		std::cout << "шесть ";
	if (i == 7)
		std::cout << "семь ";
	if (i == 8)
		std::cout << "восемь ";
	if (i == 9)
		std::cout << "девять ";

}

void	ft_tens1(int i)
{
	if (i == 10)
		std::cout << "десять ";
	if (i == 11)
		std::cout << "одиннадцать ";
	if (i == 12)
		std::cout << "двенадцать ";
	if (i == 13)
		std::cout << "тринадцать ";
	if (i == 14)
		std::cout << "четырнадцать ";
	if (i == 15)
		std::cout << "пятнадцать ";
	if (i == 16)
		std::cout << "шестнадцать ";
	if (i == 17)
		std::cout << "семнадцать ";
	if (i == 18)
		std::cout << "восемнадцать ";
	if (i == 19)
		std::cout << "девятнадцать ";
}

void	ft_tens2(int i)
{
	if (i == 2)
		std::cout << "двадцать ";
	if (i == 3)
		std::cout << "тридцать ";
	if (i == 4)
		std::cout << "сорок ";
	if (i == 5)
		std::cout << "пятьдесят ";
	if (i == 6)
		std::cout << "шестьдесят ";
	if (i == 7)
		std::cout << "семьдесят ";
	if (i == 8)
		std::cout << "восемьдесять ";
	if (i == 9)
		std::cout << "девяносто ";
}

void	ft_hundreds(int i)
{
	if (i == 1)
		std::cout << "сто ";
	if (i == 2)
		std::cout << "двести ";
	if (i == 3)
		std::cout << "триста ";
	if (i == 4)
		std::cout << "четыреста ";
	if (i == 5)
		std::cout << "пятьсот ";
	if (i == 6)
		std::cout << "шестьсот ";
	if (i == 7)
		std::cout << "семьсот ";
	if (i == 8)
		std::cout << "восемьсот ";
	if (i == 9)
		std::cout << "девятьсот ";
}

int ft_triads(int nb1)
{
	//std::cout << nb1;
	if (nb1 / 100 != 0)
	{
		ft_hundreds(nb1 / 100);
		nb1 = nb1 % 100;
	}
	if (nb1 / 10 == 1)
	{
		ft_tens1(nb1);
		return (0);
	}
	else if (nb1 / 10 != 0 && nb1 / 10 >= 2)
		ft_tens2(nb1 / 10);
	nb1 = nb1 % 10;
	ft_units(nb1 % 10);
	return (0);
}


void	ft_sep(int nb, int k)
{
	int i;
	int c;

	while (k >= 0)
	{
		k = k / 3 * 3;
		if (nb / pow(10, k) != 0)
			ft_triads(nb / pow(10, k));
		i = nb / 1000000;
		if (k / 3 * 3 == 6 && (i % 10 != 1 && i % 10 != 2 || (i < 20 && i > 10)))
			std::cout << "миллионов ";
		c = nb / 1000;
		if (k / 3 * 3 == 3 && (c % 10 != 1 && c % 10 != 2 || (c < 20 && c > 10)))
			std::cout << "тысяч ";
		if (k / 3 * 3 == 3 && c % 10 == 2 && (c > 20 || c == 2))
			std::cout << "тысячи ";
		if (k / 3 * 3 == 3 && c % 10 == 1 && (c > 20 || i == 1))
			std::cout << "миллион";
		if (k / 3 * 3 == 6 && i % 10 == 2 && (i > 20 || i == 2))
			std::cout << "миллиона ";
		if (k / 3 * 3 == 6 && i % 10 == 1 && (i > 20 || i == 1))
			std::cout << "миллион ";
		nb %= int(pow(10, k));
		k = k - 3;
	}
}

int main()
{
	int nb;
	int s;
	int k = 0;

	std::cin >> nb;
	s = nb;
	if (nb > 99000000)
	{
		std::cout << "error\n";
		return (-1);
	}
	while (s != 0)
	{
		s = s / 10;
		k++;
	}
	ft_sep(nb, k);
}
