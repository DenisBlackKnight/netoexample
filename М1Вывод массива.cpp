#include <iostream>
#include <windows.h>
#include <string>


int main() 
{
	int arr[] = {1, 2, 3, 4, 5, 6 ,7 ,8 ,9 , 10};
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) 
	{
		if (i != size - 1)
		{
			std::cout << arr[i] << ", ";
		}
		else 
		{
			std::cout << arr[i];
		}
	}
}