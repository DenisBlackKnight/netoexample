#include <iostream>    //библиотка ввода вывода
#include <windows.h>   //библиотка для установкки кодировки
#include <string>      //библиотка для строк в стиле ++
#include <cstring>     //библиотка операций над стркоами С
#include <fstream>     //библиотка работы с файлом
//Я перед тем как создать файл копирую текст чтобы снова библиотеки не писать, для маленьких и частых заданий

int ** rdsv_arr(std::ifstream& a);
void print_two_arr(int**);
void delete_two_arr(int**);


int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::ifstream f_arr{ "РСФ4.txt" };
	int** arr{ rdsv_arr(f_arr) };
	print_two_arr(arr);
	delete_two_arr(arr);

	return EXIT_SUCCESS;
}

int** rdsv_arr(std::ifstream& a)
{
	int value[2]{};
	a >> value[0];
	a >> value[1];
	if (value[0] != 0 || value[1] != 0) {

		int** arr_ptr{ new int* [value[0] + 1] };


		for (int i{}; i < value[0] + 1; ++i)
		{
			if (i == 0) {//Сохранение колиества строк и столбцов в динамическом массиве
				*arr_ptr = new int[2];
				(*arr_ptr)[0] = value[0];
				(*arr_ptr)[1] = value[1];
			}
			else
			{
				*(arr_ptr + i) = new int[value[1]];
				for (int j{ 0 }; j < value[1]; ++j)
				{
					a >> arr_ptr[i][j];
				}

			}
		}
		return arr_ptr;
	}
}
void print_two_arr(int**a)
{
	for (int i{1}; i < a[0][0] + 1; ++i)
	{
		for (int j{a[0][1]-1}; j >= 0; --j)
		{
			std::cout << a[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}
void delete_two_arr(int**a)
{
	for (int i{1}; i<a[0][0]+1;++i)
	{
		delete[] a[i];
	}
	delete a[0];
	delete[] a;
}






