#include <iostream>
#include "Class.h"


int main()
{
	Counter* b{ nullptr };
	std::string a{};
	while (true)
	{
		std::cout << "Enter? yes or no";
		std::cin >> a;
		if (a == "yes")
		{
			int c;
			std::cout << "enter value: ";
			std::cin >> c;
			b = new Counter(c);
			break;
		}
		else if (a == "no")
		{
			b = new Counter;
			break;
		}
		else {
			std::cout << "failed input\n" << "Enter? yes or no";
		}
	}
	//end of counter creating 

	char ch{};
	while (true)
	{
		std::cout << "Enter - , +, = or x for exit: ";
		std::cin >> ch;
		switch (ch) {
		case '-': b->dawn(); break;
		case '+': b->up(); break;
		case '=': std::cout << b->print() << '\n'; break;
		default:break;
		}


		if (ch == 'x')
			break;
	}
	delete b;
}