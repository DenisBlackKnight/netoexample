#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool tr = 1, fl = 0;
	std::cout << std::boolalpha;

	std::cout << "Оператор: ||" << std::endl;
	std::cout << tr << '\t' << tr     << '\t' << (tr || tr)    << std::endl;
	std::cout << fl << '\t' << tr     << '\t' << (fl || tr)    << std::endl;
	std::cout << tr << '\t' << fl     << '\t' << (tr || fl)    << std::endl;
	std::cout << fl << '\t' << fl     << '\t' << (fl || fl)    << std::endl;

	std::cout << "Оператор: &&" << std::endl;
	std::cout << tr << '\t' << tr     << '\t' << (tr && tr)    << std::endl;
	std::cout << fl << '\t' << tr     << '\t' << (fl && tr)    << std::endl;
	std::cout << tr << '\t' << fl     << '\t' << (tr && fl)    << std::endl;
	std::cout << fl << '\t' << fl     << '\t' << (fl && fl)    << std::endl;
}