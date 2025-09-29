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

	int min[] = { rows-rows,columns-columns }, max[] = { rows-1,columns-1 };

	for (int i = 0; i < rows; i++)
	{
		
		for (int j = 0; j < columns;j++)
		{
			std:: cout << arr[i][j] << '\t';

		}
		std::cout << std::endl;
	}

	std::cout << "\nМинимальный индекс [" << min[0] << "][" << min[1] <<"] \nМаксимальный индекс [" << max[0] << "][" << max[1] <<"]";
}