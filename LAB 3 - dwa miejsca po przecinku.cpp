// dwa miejsca po przecinku.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    std::cout << "Wprowadz liczby typu float";
    float x = 0;
    float y = 0;
    std::cin >> x >> y;

    
    std::cout << std::fixed << std::setprecision(2) << x + y << " " << "Dodawanie" << '\n';
    std::cout << std::fixed << std::setprecision(2) << x * y << " " << "Mnozenie" << '\n';
    std::cout << std::fixed << std::setprecision(2) << x - y << " " << "Odejmowanie" << '\n';
    
    if (y != 0)
    {
        std::cout << std::fixed << std::setprecision(2) << (x / y) << " " << "Dzielenie" << '\n';
    }


}