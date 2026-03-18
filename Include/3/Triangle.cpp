#include "Triangle.h"

Triangle::Triangle(int A, int B, int C, int a, int b, int c, int sides_count) :Figure(sides_count)
{
	this->A = A;
	this->B = B;
	this->C = C;
	this->a = a;
	this->b = b;
	this->c = c;
};
//методы
void Triangle::get()
{
	if (check())
		std::cout << "True\n";
	else
		std::cout << "False\n";
	std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << "\nSides: a = " << a << " b = " << b << " c = " << c << " \nSide's count:" << sides_count << '\n';
};
bool Triangle::check()
{
	if ((A + B + C) == 180 && sides_count == 3)
		return 1;
	else
		return 0;
};