#include <iostream>

int main()
{
	std::cout << "Wpisz liczbe gwiazdek";
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	std::cout << "Wiersz o dlugosci a" << '\n';
	for (int i = 0; i < a; i++)
	{
		std::cout << '*';
	}
	std::cout << "Kolumna o dlugosci b" << '\n';

	for (int j = 0; j < b; j++)
	{
		std::cout << '*' << '\n';
	}
	std::cout << '\n';
	std::cout << "Prostokat o wymiarach a na b" << '\n';
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
		{
			std::cout << '*';
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (i == 0 || i >= b - 1)
			{
				std::cout << '*';
			}
			else if (j == 0 || j == (a - 1))
			{
				std::cout << '*';
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << '\n';
	}
}
