#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a{}, b{}, c{};

	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Введите третье число: ";
	std::cin >> c;

	std::cout <<
		        (a > b && a > c ? a                            //Поиск максимального числа
			   : b > a && b > c ? b : c)
		      << ' ' <<
		       ((a > b && a < c) || (a > c && a < b) ? a       //Поиск серединного числа
			   :(b > a && b < c) || (b > c && b < a) ? b : c)
		      << ' ' <<
                (a < b && a < c ? a                            //Поиск минимального числа
			   :b < a && b < c ? b : c);

	//Если всечисла равные выводится 3 - c
}