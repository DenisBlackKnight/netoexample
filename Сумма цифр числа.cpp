#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int sum{}, value{1};


	while (value != 0) {
		std::cout << "������� �����: ";
		std::cin >> value;

		while (value != 0)
		{
			sum += value % 10;
			value /= 10;
		}

		std::cout << "�����: " << sum << std::endl << "��� ������ ������� '0': ";
		sum = 0;
		std::cin >> value;

	}
}