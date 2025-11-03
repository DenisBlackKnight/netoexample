#include <iostream>
#include <windows.h>
#include <string>

int** create_two_dim_array(int,int);
void fill_two_dim_array(int** two_dim_arr_ptr, int rows, int columns);
void print_two_dim_array(int** two_dim_arr_ptr, int rows, int columns);
void delete_two_dim_array(int** two_dim_arr_ptr, int rows, int columns);

int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int rows{}, columns{};
	std::cout << "Введите количество строк: ";
	std::cin >> rows;
	std::cout << "Введите количество столбцов: ";
	std::cin >> columns;

	int** two_dim_arr_ptr{ create_two_dim_array(rows, columns) };
	fill_two_dim_array(two_dim_arr_ptr, rows, columns);
	print_two_dim_array(two_dim_arr_ptr, rows, columns);
	delete_two_dim_array(two_dim_arr_ptr, rows, columns);


	return EXIT_SUCCESS;
}

int** create_two_dim_array(int rows, int columns) 
{
	int** time_ptr{ new int* [rows] };

	for (int i{}; i < columns; ++i) 
	{
		*(time_ptr+i)= new int[columns];
	}
	return time_ptr;
}

void fill_two_dim_array(int** two_dim_arr_ptr, int rows, int columns)
{
	for (int i{0}; i < rows; ++i) 
	{
		for (int j{0}; j < columns; ++j)
		{
			(*(two_dim_arr_ptr + i))[j] = ((i+1) * (j+1));
		}
	}
}

void print_two_dim_array(int** two_dim_arr_ptr, int rows, int columns)
{
	for (int i{ 0 }; i < rows; ++i)
	{
		for (int j{ 0 }; j < columns; ++j)
		{
			std::cout  << (*(two_dim_arr_ptr + i))[j] << "\t";
		}
		std::cout << '\n' << std::flush;
	}
}

void delete_two_dim_array(int** two_dim_arr_ptr, int rows, int columns)
{


	for (int i{}; i < rows; ++i)
	{
		delete[] *(two_dim_arr_ptr + i);
	}
	delete two_dim_arr_ptr;
}