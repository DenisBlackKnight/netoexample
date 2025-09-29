#include <iostream>
#include <windows.h>
#include <string>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[] = {1, 3, 2,7,9,6,4,5,8, 0};
	int temp{ 0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Массив до сторитровки: ";
	for (int value : arr) 
	{
		std::cout << value << " ";
	}
	std::cout << std::endl;


	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j > 0; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	std::cout << "Массив после сторитровки: ";
	for (int value : arr) 
	{
		std::cout << value << " ";
	}

}