#include <iostream>    //библиотка ввода вывода
#include <windows.h>   //библиотка для установкки кодировки
#include <cstring>     //библиотка операций над стркоами С
#include <fstream>     //библиотка работы с файлом


void read_arr(double* arr_ptr, std::ifstream& fwords, int string);//перенос из файла в динам. массив
void print_arr(double* arr_ptr, int string);//Печать массива


int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::ifstream fwords("РСФ2.txt"); 
	char* string = new char[30];      

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

void read_arr(double* arr_ptr, std::ifstream&  fwords, int string) //Почему переменную типа файла нельзя передать как копию а можно через ссылку?
{
	for (int i{}; !(fwords >> *(arr_ptr + i)).eof(); ++i) {}
	
}

void print_arr(double* arr_ptr, int string)
{
	for (int i{string-1}; !(i<0); --i)
	{
		std::cout << *(arr_ptr + i) << ' ';

	}

}