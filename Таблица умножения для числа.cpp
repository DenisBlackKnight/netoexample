#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int value{};

	std::cout << "Введите число: ";
	std::cin >> value;

	for (int i = 1; i <= 10; i++) 
	{
		std::cout << value << " * " << i << " = " << i * value << std::endl;
	}
}