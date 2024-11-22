// trojkat pasacala.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include<iostream>
int main()
{
	int liczba_wierszy = 0;
	std::cin >> liczba_wierszy;

	for (int i = 1; i < liczba_wierszy; i++)
	{

		for (int j = 0; j < i; ++j)
		{
			std::cout << 1 << " ";
			
		}
		std::cout << '\n';

	}
}

