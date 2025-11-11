#include <iostream>    //библиотка ввода вывода
#include <windows.h>   //библиотка для установкки кодировки
#include <cstring>     //библиотка операций над стркоами С
#include <fstream>     //библиотка работы с файлом


int ** rdsv_arr(std::ifstream& a, int& r, int& c);
void print_two_arr(int** ,int& r, int& c);
void delete_two_arr(int**, int& r);


int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::ifstream f_arr{ "РСФ4.txt" };

	if (f_arr.is_open()) {
		int rows{}, columns{};
		int** arr{ rdsv_arr(f_arr,rows,columns) };
		f_arr.close();
		print_two_arr(arr, rows, columns);
		delete_two_arr(arr, rows);
		arr = nullptr;
	}
	else
		std::cout << "Не удалось открыть файл";
	return EXIT_SUCCESS;
}

int** rdsv_arr(std::ifstream& a ,int& r, int& c)
{
	a >> r;
	a >> c;
	if (r != 0 || c != 0) {

		int** arr_ptr{ new int* [r] };


		for (int i{}; i < r; ++i)
		{
			{
				*(arr_ptr + i) = new int[c];
				for (int j{ 0 }; j < c && a >> arr_ptr[i][j]; ++j){}

			}
		}
		return arr_ptr;
	}
	return nullptr;
}
void print_two_arr(int**a, int& r, int& c)
{
	for (int i{0}; i < r; ++i)
	{
		for (int j{c-1}; j >= 0; --j)
		{
			std::cout << a[i][j] << '\t';
		}
		std::cout << std::endl;
	}
}
void delete_two_arr(int**a, int& r)
{
	for (int i{0}; i<r;++i)
	{
		delete[] a[i];
	}
	delete[] a;
}






