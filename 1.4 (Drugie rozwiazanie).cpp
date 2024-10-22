// 1.4 (Drugie rozwiazanie).cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <algorithm> 
int main()
{
std::cout << "Hello. Enter a number and check which one is the biggest";
int a = 0;
int b = 0;
int c = 0;

std::cin >> a >> b >> c;
int find_the_number = std::max({ a, b, c });

std::cout << find_the_number << " " <<"it's the biggest number";
}
