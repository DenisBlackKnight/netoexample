#include <iostream>    //библиотка ввода вывода
#include <windows.h>   //библиотка для установкки кодировки
#include <cstring>     //библиотка операций над стркоами С
#include <fstream>     //библиотка работы с файлом


void read_arr(double* arr_ptr, std::ifstream& fwords,int a);//перенос из файла в динам. массив
void print_arr(double* arr_ptr, int value_buffer);//Печать массива


int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::ifstream fwords("РСФ2.txt"); 
	char value_buffer [10];

	if (fwords.is_open())
	{
		fwords >> value_buffer;
		double* arr_ptr{ new double[atoi(value_buffer)] };
		read_arr(arr_ptr,fwords,atoi(value_buffer));
		fwords.close();
		print_arr(arr_ptr, atoi(value_buffer));
		delete[] arr_ptr;
		

		
	}
	else
		std::cout << "Не удалось открыть файл";

	return EXIT_SUCCESS;
}

void read_arr(double* arr_ptr, std::ifstream&  fwords,int a)
{
	if (a == 1) {
		fwords >> arr_ptr[0];
	}
	else {
		fwords >> arr_ptr[0];
		if (fwords.eof())
			for (int i{ 1 }; fwords >> arr_ptr[i] && !fwords.eof(); ++i) {}
	}
	
}

void print_arr(double* arr_ptr, int value_buffer)
{
	for (int i{ value_buffer -1}; !(i<0); --i)
	{
		std::cout << arr_ptr[i] << ' ';

	}

}