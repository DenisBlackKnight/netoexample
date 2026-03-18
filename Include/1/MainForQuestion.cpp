#include <iostream>
#include "MathFunctions.h"
int main(int argv, char** argc) 
{
	int a, b;
	int select;
	bool yes{ true };
	while (true) 
	{
		std::cout << "Enter first value: ";
		std::cin >> a;
		std::cout << "Enter second value: ";
		std::cin >> b;
		std::cout << "Select operator\n 1 - addition\n 2 - substraction\n 3 - multiplication\n 4 - division\n 5 - exponentiation\nEnter: ";
		std::cin >> select;
		switch (select) 
		{
		case 1: std::cout << addition(a,b) <<'\n'; break;
		case 2: std::cout << substraction(a, b) << '\n'; break;
		case 3: std::cout << multiplication(a, b) << '\n'; break;
		case 4: std::cout << division(a, b) << '\n'; break;
		case 5: std::cout << exponentiation(a, b) << '\n'; break;
		default:yes = false; break;
		}
		if (yes == false)
			break;

	}
}