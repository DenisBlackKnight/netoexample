#include <iostream>    //библиотка ввода вывода
#include <windows.h>   //библиотка для установкки кодировки
#include <string>      //библиотка для строк в стиле ++
#include <cstring>     //библиотка операций над стркоами С
#include <fstream>     //библиотка работы с файлом
//Я перед тем как создать файл копирую текст чтобы снова библиотеки не писать, для маленьких и частых заданий


int main(int argc, char ** argv) 
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream fwords("РСФ1.txt"); //про то что кириллица нежелательна знаю
	char* string = new char[30];      // Использую указатели чтобы повторить тему

	while (!fwords.eof()) {
		fwords >> string;
		std::cout << string << std::endl;
	}
	return EXIT_SUCCESS;
}