#pragma once
#include "Triangle.h"

class Triangle_Pryam : public Triangle
{
public:
	Triangle_Pryam(int A, int B, int C, int a, int b, int c, int sides_count);
	bool check() override;
};