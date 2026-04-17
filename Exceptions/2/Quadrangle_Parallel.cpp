#include "Quadrangle_Parallel.h"

Quadrangle_Parallel::Quadrangle_Parallel(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count) :Quadrangle(A, B, C, D, a, b, c, d, sides_count)
	{
	}
	bool Quadrangle_Parallel::check()
	{
		if (A == C && B == D && A + B + C + D == 360 && sides_count == 4)
			return 1;
		else
			return 0;
	}