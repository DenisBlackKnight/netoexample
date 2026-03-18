#pragma once
#include "Quadrangle_Pryam.h"

class QuadranglePryam_Square : public Quadrangle_Pryam
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	QuadranglePryam_Square(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count);
	bool check() override;
};