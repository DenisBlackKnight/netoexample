#include <iostream>
#include <windows.h>
#include <string>

int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr_size{};

	std::cout << "¬ведите размер массива: ";
	std::cin >> arr_size;

	int* arr_ptr{ new int[arr_size] };

	for (int i{}; i < arr_size; ++i) 
	{
		std::cout << "arr_ptr[" << i << "] = ";
		std::cin >> *(arr_ptr + i);
	}

	std::cout << "¬ведЄнный массив: ";
	for (int i{}; i < arr_size; ++i)
	{
		std::cout << arr_ptr[i] << ' ';
	}

	delete[] arr_ptr;
	return EXIT_SUCCESS;
}