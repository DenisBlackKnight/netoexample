#pragma once
#include "Quadrangle.h"

class Quadrangle_Parallel : public Quadrangle
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	Quadrangle_Parallel(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count);
	bool check() override;
};