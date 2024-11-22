// Zadanie 3.2 podaj znak z klawiatury.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
        std::cout << "Podaj znak na klawiaturze";

        char znak = ' ';
        while (std::cin >> znak)
            if (znak == 't')
            {
                return 0;
            }
    }
