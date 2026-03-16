#include "MathFunctions.h"
int addition(int*& a, int*& b)
{
	return *a + *b;
}
int substraction(int*& a, int*& b)
{
	return *a - *b;
}
int multiplication(int*& a, int*& b)
{
	return *a * *b;
}
double division(int*& a, int*& b)
{
	return static_cast<double>(*a) / *b;
}
int exponentiation(int*& a, int*& b)
{
	int power{ *a };
	for (int i{}; i < *b; i++)
	{
		power *= *a;
	}
	return power;
}

