#include <iostream>
#include <windows.h>
#include <string>

double* create_array(int );

int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr_size{};

	std::cout << "¬ведите размер массива: ";
	std::cin >> arr_size;

	double* arr_ptr {create_array(arr_size)};

	std::cout << "Mассив: ";
	for (int i{}; i < arr_size; ++i)
	{
		std::cout << arr_ptr[i] << ' ';
	}

	delete[] arr_ptr;
	return EXIT_SUCCESS;
}

double* create_array(int arr_size)
{
	double* cr_arr_ptr{ new double [arr_size] {} };
	return cr_arr_ptr;

}