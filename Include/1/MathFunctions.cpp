#include "MathFunctions.h"
int addition(const int& a, const int& b)
{
	return a + b;
}
int substraction(const int& a, const int& b)
{
	return a - b;
}
int multiplication(const int& a, const int& b)
{
	return a * b;
}
double division(const int& a, const int& b)
{
	return static_cast<double>(a) / b;
}
int exponentiation(const int & a, const int & b)
{
	int power{ 1 };
	for (int i{}; i < b; i++)
	{
		power *= a;
	}
	return power;
}

