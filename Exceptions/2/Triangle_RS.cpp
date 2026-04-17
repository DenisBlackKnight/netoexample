#include "Triangle_RS.h"

	//конструкторы
Triangle_RS::Triangle_RS(int A, int B, int C, int a, int b, int c, int sides_count) :Triangle(A, B, C, a, b, c, sides_count)
	{
	}
	//методы
	bool Triangle_RS::check()
	{
		if ((A + B + C) == 180 && A == B && B == C && sides_count == 3)
			return 1;
		else
			return 0;
	}