# include <iostream>
# include <windows.h>
# include <string>
# include <cstring>

int main(int argv, char** argc)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "rus");

	char secret_word[25];



	do 
	{
		std::cout << "Угадайте слово: ";
		std::cin >> secret_word;
		!strcmp(secret_word, "малина") ? std::cout << "Правильно! вы победили! загаданное слово - малина" : std::cout << "Неправильно\n";
	} while (strcmp(secret_word, "малина"));

	

	return EXIT_SUCCESS;
}