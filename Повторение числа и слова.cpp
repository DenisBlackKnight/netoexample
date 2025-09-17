#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number{ 0 };
	std::string word{0};

	std::cout << "Введите число" << std::endl;
	std::cin >> number;

	std::cout << "Введите слово или слова" << std::endl;
	std::getline(std::cin >> std::ws,word);

	std::cout << "Число: " << number << " | Слово или слова: " << word << std::endl;
}