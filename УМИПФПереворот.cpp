#include <iostream>
#include <windows.h>
#include <string>

void swap(int* ptra, int* ptrb)
{
	*ptra = *ptra - *ptrb;
	*ptrb = *ptrb + *ptra;
	*ptra = *ptrb - *ptra;
}

void swapIpaws(int* arr, int size) 
{
	int x{ 0 }, y{ (size-1) };
	while (x < y)
	{
		swap(&arr[x], &arr[y]);
		x++;
		y--;
	}
}
void printArr(int* arr, int size)
{
	int x{ 0 };
	while (x != size)
	{
		std::cout << arr[x] << ' ';
		x++;
	}
	std::cout << std::endl;
}

int main(int argc, char** argv)
{
	int a[10]{ 5,6,4,7,5,3,2,6,7,3 };
	printArr(a, 10);
	swapIpaws(a,10);
	printArr(a,10);

	return EXIT_SUCCESS;
}

	