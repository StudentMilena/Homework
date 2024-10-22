#include <iostream>
#include <algorithm> 
int main()
{
std::cout << "Hello. Enter a number. The program is going to find the biggest one.";
int a;
int b;
int c;

std::cin >> a >> b >> c;
int largest = std::max({ a, b, c });

std::cout << largest << " " <<"is the biggest number you have entered.";
}
