#pragma once
#include <iostream>
#include "Figure.h"
class Triangle : public Figure
{
	//поля
protected:
	int A, B, C;
	int a, b, c;
public:
	//конструкторы
	Triangle(int A, int B, int C, int a, int b, int c, int sides_count);
	//методы
	void get() override;
	bool check() override;
};
