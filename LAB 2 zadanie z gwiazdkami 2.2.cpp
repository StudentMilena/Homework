// 2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
//

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

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
