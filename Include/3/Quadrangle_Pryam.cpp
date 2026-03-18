#include "Quadrangle_Pryam.h"


Quadrangle_Pryam::Quadrangle_Pryam(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count) :Quadrangle(A, B, C, D, a, b, c, d, sides_count)
	{
	};
	bool Quadrangle_Pryam::check()
	{
		if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90 && sides_count == 4)
			return 1;
		else
			return 0;
	};