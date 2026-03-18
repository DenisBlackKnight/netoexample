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
double exponentiation(const int & a, const int & b)
{
	double power{ 1 };
	if (b >= 0) {
		for (int i{}; i < b; i++)
		{
			power *= a;
		}
	}
	else if (b < 0) {
		for (int i{}; i > b; i--)
		{
			power /= a;
		}
	}

	return power;
}

