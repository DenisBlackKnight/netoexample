#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a{}, b{}, c{};

	std::cout << "������� ������ �����: ";
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	std::cin >> b;
	std::cout << "������� ������ �����: ";
	std::cin >> c;

	std::cout <<
		        (a > b && a > c ? a                            //����� ������������� �����
			   : b > a && b > c ? b : c)
		      << ' ' <<
		       ((a > b && a < c) || (a > c && a < b) ? a       //����� ����������� �����
			   :(b > a && b < c) || (b > c && b < a) ? b : c)
		      << ' ' <<
                (a < b && a < c ? a                            //����� ������������ �����
			   :b < a && b < c ? b : c);

	//���� �������� ������ ��������� 3 - c
}