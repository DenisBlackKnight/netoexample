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

	std::cout << "Введите ваш пол: ";
	std::cin >> gender;
	std::cout << "Введите ваш возраст: ";
	std::cin >> age;
	std::cout << "Введите ваш Знак Зодиака: ";
	std::cin >> zodiac_sign;
	std::cout << "Ваше предсказание: ";

	if 
		( (zodiac_sign == "рыбы" || zodiac_sign == "рак")  && age < 40 && gender == 'м')
		std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";

	else if
        ( (zodiac_sign == "телец" || zodiac_sign == "дева"  || zodiac_sign == "козерог") && (age >= 15 || age <=30) && gender == 'ж')
		std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех.";
	
	else if
		(zodiac_sign == "скорпион")
		std::cout << "Всё прекрасно";

	else
		std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
}