#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char symbol = 'g';
	int a{}, b{}, a1{}, a2{}, b1{}, b2{};
	bool sign_negative{};
	std::string

		n0 = "����", n1 = "����", n2 = "���", n3 = "���", n4 = "������", n5 = "����", n6 = "�����", n7 = "����", n8 = "������", n9 = "������",
		t2 = "��������", t3 = "��������", t4 = "�����", t5 = "���������", t6 = "����������", t7 = "���������", t8 = "�����������", t9 = "���������";

	while (symbol != 'q') {
		std::cout << "������� ����� �� -99 �� 99 ������������" << std::endl;
		std::cout << "������� ������ �����: ";
		std::cin >> a;
		std::cout << "������� ������ �����: ";
		std::cin >> b;
		if (a < 100 && a > -100 && b < 100 && b > -100)
		{
			a1 = a >= 0 ? a / 10 : a / 10 * -1;
			a2 = a >= 0 ? a % 10 : a % 10 * -1;
			b1 = b >= 0 ? b / 10 : b / 10 * -1;
			b2 = b >= 0 ? b % 10 : b % 10 * -1;

			//������ ������
			// 
			//��������� ������� ������� �����
			if (a < 0)
				std::cout << "����� ";

			if (a == 0)
				std::cout << n0;

			else if (a1 == 1) // ���� ����� �� 10 �� 19
			{
				switch (a2) {
				case 0:std::cout << "������";
					break;
				case 1:std::cout << "����������";
					break;
				case 2:std::cout << "����������";
					break;
				case 3:std::cout << "����������";
					break;
				case 4:std::cout << "������������";
					break;
				case 5:std::cout << "����������";
					break;
				case 6:std::cout << "�����������";
					break;
				case 7:std::cout << "����������";
					break;
				case 8:std::cout << "������������";
					break;
				case 9:std::cout << "������������";
					break;
				default:break;
				}
			}
			// ���� ����� �� ���� ����������
			else {
				switch (a1) {
				case 2:std::cout << t2;
					break;
				case 3:std::cout << t3;
					break;
				case 4:std::cout << t4;
					break;
				case 5:std::cout << t5;
					break;
				case 6:std::cout << t6;
					break;
				case 7:std::cout << t7;
					break;
				case 8:std::cout << t8;
					break;
				case 9:std::cout << t9;
				break; default:;
				}

				if (a1 != 0) std::cout << ' ';

				switch (a2) {
				case 1:std::cout << n1;
					break;
				case 2:std::cout << n2;
					break;
				case 3:std::cout << n3;
					break;
				case 4:std::cout << n4;
					break;
				case 5:std::cout << n5;
					break;
				case 6:std::cout << n6;
					break;
				case 7:std::cout << n7;
					break;
				case 8:std::cout << n8;
					break;
				case 9:std::cout << n9;
					break;
				};

			}


			// ����//////////////////////////////////////////////////////

			if (a == b)
				std::cout << " ����� ";
			if (a < b)
				std::cout << " ������ ��� ";
			if (a > b)
				std::cout << " ������ ��� ";

			//��������� ������� ������� �����
			if (b < 0)
				std::cout << "����� ";

			if (b == 0) {
				std::cout << n0;
			}
			else if (b1 == 1) // ���� ����� �� 10 �� 19
			{
				switch (b2) {
				case 0:std::cout << "������";
					break;
				case 1:std::cout << "����������";
					break;
				case 2:std::cout << "����������";
					break;
				case 3:std::cout << "����������";
					break;
				case 4:std::cout << "������������";
					break;
				case 5:std::cout << "����������";
					break;
				case 6:std::cout << "�����������";
					break;
				case 7:std::cout << "����������";
					break;
				case 8:std::cout << "������������";
					break;
				case 9:std::cout << "������������";
					break;
				default:break;
				}
			}
			// ���� ����� �� ���� ����������
			else {
				switch (b1) {
				case 2:std::cout << t2;
					break;
				case 3:std::cout << t3;
					break;
				case 4:std::cout << t4;
					break;
				case 5:std::cout << t5;
					break;
				case 6:std::cout << t6;
					break;
				case 7:std::cout << t7;
					break;
				case 8:std::cout << t8;
					break;
				case 9:std::cout << t9;
					break;
				}

				if (b1 != 0) std::cout << ' ';

				switch (b2) {
				case 1:std::cout << n1;
					break;
				case 2:std::cout << n2;
					break;
				case 3:std::cout << n3;
					break;
				case 4:std::cout << n4;
					break;
				case 5:std::cout << n5;
					break;
				case 6:std::cout << n6;
					break;
				case 7:std::cout << n7;
					break;
				case 8:std::cout << n8;
					break;
				case 9:std::cout << n9;
					break;
				};

			}
		}


		else
			std::cout << "\n���� ��� ��� ����� ��� ���������";
			std::cout << "\n������� q ��� ������";
			std::cin >> symbol;
	}

}