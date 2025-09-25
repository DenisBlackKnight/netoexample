#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char symbol = 'g';
	int a{}, b{}, a1{}, a2{}, b1{}, b2{};
	std::string

		n0 = "ноль", n1 = "один", n2 = "два", n3 = "три", n4 = "четыре", n5 = "пять", n6 = "шесть", n7 = "семь", n8 = "восемь", n9 = "девять",
		t2 = "двадцать", t3 = "тридцать", t4 = "сорок", t5 = "пятьдесят", t6 = "шестьдесят", t7 = "семьдесят", t8 = "восемьдесят", t9 = "девяносто";

	while (symbol != 'q') {

		std::cout << "Введите числа от -99 до 99 включительно" << std::endl;
		std::cout << "Введите первое число: ";
		std::cin >> a;
		std::cout << "Введите второе число: ";
		std::cin >> b;

		if (a < 100 && a > -100 && b < 100 && b > -100)
		{

			//Вставка десятков и единиц в переменные

			a1 = std::abs(a) / 10;
			a2 = std::abs(a) % 10;

			b1 = std::abs(b) / 10;
			b2 = std::abs(b) % 10;

			//Сборка ответа
			
			//Текстовый вариант первого числа
			if (a < 0)
				std::cout << "минус ";

			if (a == 0)
				std::cout << n0;
			else if (a1 == 1) // Если числа от 10 до 19
			{
				switch (a2) {
				case 0:std::cout << "десять";
					break;
				case 1:std::cout << "одинадцать";
					break;
				case 2:std::cout << "двенадцать";
					break;
				case 3:std::cout << "тринадцать";
					break;
				case 4:std::cout << "четырнадцать";
					break;
				case 5:std::cout << "пятнадцать";
					break;
				case 6:std::cout << "шестнадцать";
					break;
				case 7:std::cout << "семнадцать";
					break;
				case 8:std::cout << "восемнадцать";
					break;
				case 9:std::cout << "девятнадцать";
					break;
				default:break;
				}
			}
			// Текстовый вариант первого числа
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

			// Проверка равенства

			if (a == b)
				std::cout << " равно ";
			else if (a < b)
				std::cout << " меньше чем ";
			else 
				std::cout << " больше чем ";

			//Текстовый вариант второго числа
			if (b < 0)
				std::cout << "минус ";

			if (b == 0) 
				std::cout << n0;
			else if (b1 == 1) // Если числа от 10 до 19
			{
				switch (b2) {
				case 0:std::cout << "десять";
					break;
				case 1:std::cout << "одинадцать";
					break;
				case 2:std::cout << "двенадцать";
					break;
				case 3:std::cout << "тринадцать";
					break;
				case 4:std::cout << "четырнадцать";
					break;
				case 5:std::cout << "пятнадцать";
					break;
				case 6:std::cout << "шестнадцать";
					break;
				case 7:std::cout << "семнадцать";
					break;
				case 8:std::cout << "восемнадцать";
					break;
				case 9:std::cout << "девятнадцать";
					break;
				default:break;
				}
			}
			// Если числа из двух переменных
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
			std::cout << "\nОдно или оба числа вне диапозона";

			// Я знаю про блоки изфигурных скобок,и что несколько операторов можно использовать через {} 
			// я цикл добавил только для того чтобы при проверке ненадо было заново  отладку начинать 
			// Если вы введёте вне диапозона то else над комментарием выполнится

			//Ввод для повторения цикла или окончания работы
			std::cout << "\nвведите q для выхода";
			std::cin >> symbol;
	}

}