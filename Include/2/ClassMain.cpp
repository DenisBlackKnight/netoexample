#include <iostream>
#include "Class.h"


int main()
{

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
			Counter b(c);

			char ch{};
			while (true)
			{
				std::cout << "Enter - , +, = or x for exit: ";
				std::cin >> ch;
				switch (ch) {
				case '-': b.dawn(); break;
				case '+': b.up(); break;
				case '=': std::cout << b.print() << '\n'; break;
				default:break;
				}


				if (ch == 'x')
					break;
			}

			break;
		}
		else if (a == "no")
		{
			Counter b;

			char ch{};
			while (true)
			{
				std::cout << "Enter - , +, = or x for exit: ";
				std::cin >> ch;
				switch (ch) {
				case '-': b.dawn(); break;
				case '+': b.up(); break;
				case '=': std::cout << b.print() << '\n'; break;
				default:break;
				}


				if (ch == 'x')
					break;
			}

			break;



		}
		else {
			std::cout << "failed input\n" << "Enter? yes or no";
		}
	}
	//end of counter creating 

	
}