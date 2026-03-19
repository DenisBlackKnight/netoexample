#include "QuadranglePryam_Square.h"


QuadranglePryam_Square::QuadranglePryam_Square(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count) :Quadrangle_Pryam(A, B, C, D, a, b, c, d, sides_count)
	{
	}
	bool QuadranglePryam_Square::check()
	{
		if (a == b && a == c && a == d && A == 90 && B == 90 && C == 90 && D == 90 && sides_count == 4)
			return 1;
		else
			return 0;
	}