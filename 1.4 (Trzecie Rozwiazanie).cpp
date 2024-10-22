#include <iostream>

int main()
{
std::cout << "Hello. Enter three numbers. The program is going to check, which one is the largest among three you have entered.";
int a = 0;
int b = 0;
int c = 0;
std::cin >> a >> b >> c;

int compare = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
std::cout << "The biggest number is " << compare;
}
