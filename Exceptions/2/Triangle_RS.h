#pragma once
#include "Triangle.h"

class Triangle_RS : public Triangle
{
	//поля = A B C a b c from Triangle
public:
	//конструкторы
	Triangle_RS(int A, int B, int C, int a, int b, int c, int sides_count);
	//методы
	bool check() override;
};