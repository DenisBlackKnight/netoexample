#include <iostream>
#include <windows.h>

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int value{};
	int sum{};

	do
	{
		std::cout << "Введите целое число или число '0' чтобы закончить: ";//<< std::endl;
		std::cin >> value;
		sum += value;
	} while (value != 0);
	std::cout << "Сумма: " << sum;
}