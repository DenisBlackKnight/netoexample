#include <iostream>
#include <windows.h>
#include <string>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[][6] = {
		{1, 5, 7, 8, 9, 8},
		{6, 5, 8, 9 ,0, 7},
	    {5, 999, 6, 5, 8 ,9}
	};

	int rows = sizeof(arr) / sizeof(arr[0]);
	int columns = sizeof(arr[0]) / sizeof(arr[0][0]);
	int maxindex[2] = { 0 }, minindex[2] = { 0 };
	int maxvalue = arr[0][0], minvalue = arr[0][0];


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr[i][j] << '\t';
			if(maxvalue < arr [i][j])
			{
				maxindex[0] = i;
				maxindex[1] = j;
				maxvalue = arr[i][j];
			}
			if (minvalue > arr[i][j])
			{
				minindex[0] = i;
				minindex[1] = j;
				minvalue = arr[i][j];
			}

		}
		std::cout << std::endl;
	}

	std::cout << "Минимальный коэффициент: [" << minindex[0] << "][" << minindex[1] << "] " << " Максимальные коэффициент: [" << maxindex[0] << "][" << maxindex[1] << "]" << std::endl;
}
