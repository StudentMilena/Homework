// 1.4 (  pierwsze rozwiązanie).cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>

int main()
{
std::cout << "Hello. Enter three digits and check, which one is the greatest";
int number_1;
int number_2;
int number_3;
std::cin >> number_1 >> number_2 >> number_3;

if (number_1 >= number_2 && number_1 >= number_3)
{
	std::cout << number_1 << " " << "is the biggest number";
}
else if (number_2 >= number_1 && number_2 >= number_3)
{
	std::cout << number_2 << " " << "is the biggest number";
}
else
{
	std::cout << number_3 << " " << "is the biggest number";
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
