#include "Triangle_RB.h"

Triangle_RB::Triangle_RB(int A, int B, int C, int a, int b, int c, int sides_count) :Triangle(A, B, C, a, b, c, sides_count)
	{
	};
	bool Triangle_RB::check()
	{
		if ((A + B + C) == 180 && a == c && A == C && sides_count == 3)
			return 1;
		else
			return 0;
	};