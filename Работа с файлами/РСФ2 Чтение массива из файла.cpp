#include <iostream>    //библиотка ввода вывода
#include <windows.h>   //библиотка для установкки кодировки
#include <string>      //библиотка для строк в стиле ++
#include <cstring>     //библиотка операций над стркоами С
#include <fstream>     //библиотка работы с файлом
//Я перед тем как создать файл копирую текст чтобы снова библиотеки не писать, для маленьких и частых заданий

void read_arr(double* arr_ptr, std::ifstream& fwords, int string);
void print_arr(double* arr_ptr, int string);


int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//ЗАДАНИЕ

	std::ifstream fwords("РСФ2.txt"); //про то что кириллица нежелательна знаю
	char* string = new char[30];      // Использую указатели чтобы повторить тему

	if (fwords.is_open())
	{
		fwords >> string;
		double* arr_ptr{ new double[atoi(string)] };
		read_arr(arr_ptr,fwords,atoi(string));
		fwords.close();
		print_arr(arr_ptr, atoi(string));
		delete[] arr_ptr;
		

		
	}
	else
		std::cout << "Не удалось открыть файл";

	return EXIT_SUCCESS;
}

void read_arr(double* arr_ptr, std::ifstream&  fwords, int string)
{
	for (int i{}; !fwords.eof(); ++i)//перенос из файла в динам. массив
	{
		fwords >> *(arr_ptr + i);
	}
}
void print_arr(double* arr_ptr, int string)
{
	for (int i{string-1}; !(i<0); --i)//перенос из файла в динам. массив
	{
		std::cout << *(arr_ptr + i) << ' ';

	}

}