# include <iostream>
# include <windows.h>
# include <string>
# include <cstring>

int main(int argv, char ** argc)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "rus");

	char f_name[20]{}, l_name[20]{}, full_name[40]{};

	std::cout << "¬ведите ваше им€: ";
	std::cin >> f_name;
	std::cout << "¬ведите вашу фамилию: ";
	std::cin >> l_name;

	strcat_s(full_name, sizeof(full_name)/sizeof(full_name[0]), f_name);
	strcat_s(full_name, sizeof(full_name) / sizeof(full_name[0]), " ");
	strcat_s(full_name, sizeof(full_name) / sizeof(full_name[0]), l_name);

	std::cout << std::endl << "«дравствуйте, " << full_name << "!";

	return EXIT_SUCCESS;
}