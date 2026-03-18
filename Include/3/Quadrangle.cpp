#include "Quadrangle.h"


Quadrangle::Quadrangle(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count) :Figure(sides_count)
	{
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	};
	void Quadrangle::get()
	{
		if (check())
			std::cout << "True\n";
		else
			std::cout << "False\n";
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << "\n Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << " \nSide's count:" << sides_count << '\n';
	};
	bool Quadrangle::check()
	{
		if ((A + B + C + D) == 360 && sides_count == 4)
			return 1;
		else
			return 0;
	};