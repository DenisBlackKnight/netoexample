#include "Triangle_Pryam.h"

Triangle_Pryam::Triangle_Pryam(int A, int B, int C, int a, int b, int c, int sides_count) :Triangle(A, B, C, a, b, c, sides_count)
	{
	};
	bool Triangle_Pryam::check()
	{
		if ((A + B + C) == 180 && C == 90 && sides_count == 3)
			return 1;
		else
			return 0;
	};