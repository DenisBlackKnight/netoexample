#include <iostream>

//Классы
class Figure 
{
	//Поля
protected:
	int sides_count;
	//Конструкторы
public:
	Figure() 
	{
		sides_count = { 0 };
	}
	Figure(int a)
	{
		sides_count = { a };
	}
	//Методы
	int get_sides_count() 
	{
		return sides_count;
	}
};
class Triangle : public Figure 
{
public:
	Triangle() :Figure(3) {};
};
class Quadrangle : public Figure
{
public:
	Quadrangle() :Figure(4) {};
};



int main () 
{
	Figure one;
	Triangle two;
	Quadrangle three;
	std::cout << "Sides count: \n"
		<< "Figure: " << one.get_sides_count() << "\n"
		<< "Triangle: " << two.get_sides_count() << "\n"
		<< "Quadrangle: " << three.get_sides_count() << "\n";
}