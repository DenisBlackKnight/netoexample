#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
	//поля
protected:
	int A, B, C, D;
	int a, b, c, d;
public:
	//конструкторы
	Quadrangle(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count);
	void get() override;
	bool check() override;
};