#include <iostream>
#include <windows.h>
#include <string>

void swap(int*ptra,int *ptrb) 
{
	*ptra = *ptra - *ptrb;
	*ptrb = *ptrb + *ptra;
	*ptra = *ptrb - *ptra;
}

int main(int argc, char** argv)
{
	int a{ 5 }, b{ 349 };

	std::cout << a << ' ' << b << std::endl;
	swap(&a, &b);
	std::cout << a << ' ' << b << std::endl;
	swap(&b, &a);
	std::cout << a << ' ' << b << std::endl;
	return EXIT_SUCCESS;
}