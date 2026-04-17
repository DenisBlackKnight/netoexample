#pragma once
#include <iostream>
class Figure
{
	//Поля
protected:
	int sides_count;
	//Конструкторы
public:
	Figure();
	Figure(int a);
	//Методы
	virtual void get();
	virtual bool check();
};