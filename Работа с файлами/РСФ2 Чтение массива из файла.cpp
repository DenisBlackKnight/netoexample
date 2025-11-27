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
	int value_buffer;

	if (fwords.is_open())
	{
		fwords >> value_buffer;
		double* arr_ptr{ new double[value_buffer] };
		read_arr(arr_ptr,fwords,value_buffer);
		fwords.close();
		print_arr(arr_ptr, value_buffer);
		delete[] arr_ptr;
		

		
	}
	else
		std::cout << "Не удалось открыть файл";

	return EXIT_SUCCESS;
}

void read_arr(double* arr_ptr, std::ifstream&  fwords,int a)
{
	
			for (int i{ 0 }; fwords >> arr_ptr[i] && !fwords.eof(); ++i) {}
	
}

void print_arr(double* arr_ptr, int value_buffer)
{
	for (int i{ (value_buffer -1)}; i >= 0; --i)
	{
		std::cout << arr_ptr[i] << ' ';

	}

}