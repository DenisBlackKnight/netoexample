#include <iostream>
#include "Figure.h"

	Figure::Figure()
	{
		sides_count = { 0 };
	}
	Figure::Figure(int a)
	{
		sides_count = { a };
	}
	//Методы
	void Figure::get()
	{
		if (check())
			std::cout << "True\n";
		else
			std::cout << "False\n";
		std::cout << "sides_count = " << sides_count << '\n';
	}
	bool Figure::check()
	{
		if (sides_count > 0)
			return 1;
		else
			return 0;
	};