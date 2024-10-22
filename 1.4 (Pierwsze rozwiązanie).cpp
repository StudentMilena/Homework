#include <iostream>

int main()
{
std::cout << "Hello. Enter three digits. Which one is the greatest?";
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
