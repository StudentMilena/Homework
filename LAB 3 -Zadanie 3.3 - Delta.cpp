// Delta w funkcji.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std;

void rownanie_kwadratowe(int a, int b, int c)              
{
    
    int delta = pow(b, 2) - (4 * a * c);
    if (delta > 0)           //dwa rozwiązania
    {
        int x1 = (-b - sqrt(delta)) / (2 * a);

        std::cout << x1 << " ";

        int x2 = (-b + sqrt(delta)) / (2 * a);

        std::cout << x2 << " ";
    }

    else if (delta == 0)
    {
        int x = -b / 2 * a;
        std::cout << x << " ";
    }
    else
    {
        std::cout << "The equation has no solution";

    }
}
int main()
{
    std::cout << "Postac rownania kwadratowego: b^2-4ac" << '\n';
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    rownanie_kwadratowe(a, b, c);
}
