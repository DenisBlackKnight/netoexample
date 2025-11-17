#include <iostream>    //библиотка ввода вывода
#include <windows.h>   //библиотка для установкки кодировки
#include <string>      //библиотка для строк в стиле ++
#include <cstring>     //библиотка операций над стркоами С
#include <fstream>     //библиотка работы с файлом



int main(int argc, char ** argv) 
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream fwords("РСФ1.txt");


	if (fwords.is_open()) {

		char* buffer_string = new char[30];   

		while (fwords >> buffer_string) {
			
			std::cout << buffer_string << std::endl;
		}


		delete[] buffer_string;
		fwords.close();
	}
	else
		std::cout << "Файл не открылся (";

	return EXIT_SUCCESS;
}