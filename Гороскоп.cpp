#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char gender{};
	int age{};
	std::string zodiac_sign{};

	std::cout << "������� ��� ���: ";
	std::cin >> gender;
	std::cout << "������� ��� �������: ";
	std::cin >> age;
	std::cout << "������� ��� ���� �������: ";
	std::cin >> zodiac_sign;
	std::cout << "���� ������������: ";

	if 
		( (zodiac_sign == "����" || zodiac_sign == "���")  && age < 40 && gender == '�')
		std::cout << "������� ����� ������������ ����. ����� �������� ����, ��� ������ �������� ����� �����������.";

	else if
        ( (zodiac_sign == "�����" || zodiac_sign == "����"  || zodiac_sign == "�������") && (age >= 15 || age <=30) && gender == '�')
		std::cout << "����������� ����� �������� ��� ������� � ��������, ���������� �������� ���������� � ����������������� ���������. ����� �� ������ ������, �� � ��������� : ������� ����, ������� ������� ����.";
	
	else if
		(zodiac_sign == "��������")
		std::cout << "�� ���������";

	else
		std::cout << "�������� ��� ��� ��������� � ����������. ��������� ������� ����� ;)";
}