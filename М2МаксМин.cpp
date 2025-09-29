#include <iostream>
#include <windows.h>
#include <string>


int main()
{
	int arr[] = { -230, 67, 56, 45, 200000, 6 ,49 ,46 ,20 , 7
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int min{arr[0]}, max{arr[0]};

	for (int i = 1; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];

	}
	std::cout << "Max: " << max << std::endl
		      << "Min: " << min;
}