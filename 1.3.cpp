// 1.3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>

int main()
{   
std::cout << "Hello, user. Enter a number and check, if is even or odd.";
int is_even_or_odd;
std::cin >> is_even_or_odd;

if (is_even_or_odd == 0)
{
    std::cout << "The number is zero";
}
else if (is_even_or_odd % 2 == 0)
{
    std::cout << "The number is positive";
}
else
{
    std::cout << "The number is odd";
}
}
