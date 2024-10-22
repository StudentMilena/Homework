// 1.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
std::cout << "Hello, user. Enter a number. Your program is going to check, whether is positive or negative.";
int number;
std::cin >> number;

if (number > 0)
{
    std::cout << "The number is positive";
}
else if (number < 0)
{
    std::cout << "The number is negative";
}
else
{
    std::cout << "The number is zero";
}
}
