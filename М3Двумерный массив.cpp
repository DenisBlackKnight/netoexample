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
	    {5, 3, 6, 5, 8 ,9}
	};

	int rows = sizeof(arr) / sizeof(arr[0]);
	int columns = sizeof(arr[0]) / sizeof(arr[0][0]);
	int max[2] = { 0 }, min[2] = { 0 };


	for (int i = 0; i < rows; i++)
	{
		if (max[0] < i)
			max[0] = i;
		if (min[0] > i)
			min[0] = i;
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr[i][j] << '\t';
			if (max[1] < j)
				max[1] = j;
			if (min[1] > j)
				min[1] = j;
		}
		std::cout << std::endl;
	}

	std::cout << "Минимальный коэффициент: [" << min[0] << "][" << min[1] << "] " << " Максимальные коэффициент: [" << max[0] << "][" << max[1] << "]" << std::endl;
}
