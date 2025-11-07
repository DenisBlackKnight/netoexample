#include <iostream>    //библиотка ввода вывода
#include <windows.h>   //библиотка для установкки кодировки
#include <string>      //библиотка для строк в стиле ++
#include <cstring>     //библиотка операций над стркоами С
#include <fstream>     //библиотка работы с файлом
//Я перед тем как создать файл копирую текст чтобы снова библиотеки не писать, для маленьких и частых заданий

int* create_arr(int* arr, int* size_ptr);
void save_arr(int* arr_ptr, int* size);


int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size{};
	int* arr_ptr{};
	arr_ptr = create_arr(arr_ptr,&size);
	save_arr(arr_ptr, &size);


	return EXIT_SUCCESS;
}

int* create_arr(int * arr, int* size_ptr)
{
	int size{};
	std::cout << "Введите рамзер массива: ";
	std::cin >> size;

	if (size != 0)
	{
		int* arr_ptr{ new int[size] };

		for (int i{}; i < size; ++i)
		{
			std::cout << "arr[" << i << "] = ";
			std::cin >> arr_ptr[i];
			
		}
		*size_ptr = size;
		return arr_ptr;
	}
	else
		std::cout << "Размер равен нулю";

	
}
void save_arr(int* arr_ptr, int * size)
{
	std::ofstream fwords("РСФ3.txt");

	fwords << *size << std::endl;
	for (int i{}; i < *size; ++i)
	{
		fwords << arr_ptr[i] << " ";

	}
}