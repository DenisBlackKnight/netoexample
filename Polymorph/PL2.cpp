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
	virtual void get()
	{
		std::cout << "sides_count = " << sides_count;
	}
};

//Треугольники
class Triangle : public Figure
{
	//поля
protected:
	int A, B, C;
	int a, b, c;
public:
	//конструкторы
	Triangle(int A, int B, int C, int a, int b, int c) :Figure(3)
	{
		this->A = A;
		this->B = B;
		this->C = C;
		this->a = a;
		this->b = b;
		this->c = c;
	};
	//методы
	void get() override
	{
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << "\n Sides: a = " << a << " b = " << b << " c = " << c << " \nSide's count:" << sides_count << '\n';
	};
};
class Triangle_Pryam : public Triangle
{
	//поля = A B C a b c from Triangle
public:
	//конструкторы
	Triangle_Pryam(int A, int B, int a, int b, int c) :Triangle(A, B, 90, a, b, c)
	{};
	//методы
	
};
class Triangle_RB : public Triangle
{
	//поля = A B C a b c from Triangle
public:
	//конструкторы
	Triangle_RB(int A, int B,int a, int b) :Triangle(A, B, A, a, b, a)
	{
	};
	//методы

};
class Triangle_RS : public Triangle
{
	//поля = A B C a b c from Triangle
public:
	//конструкторы
	Triangle_RS(int a) :Triangle(60, 60, 60, a, a, a)
	{
	};
	//методы
};

//Четырёхугольники
class Quadrangle : public Figure
{
	//поля
protected:
	int A, B, C, D;
	int a, b, c, d;
public:
	//конструкторы
	Quadrangle(int A, int B, int C, int D, int a, int b, int c, int d) :Figure(4)
	{
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	};
	void get() override
	{
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << "\n Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << " \nSide's count:" << sides_count << '\n';
	};
};
class Quadrangle_Pryam : public Quadrangle
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	Quadrangle_Pryam(int A, int B, int a, int b) :Quadrangle(A,B,A,B,a,b,a,b)
	{};
};
class QuadranglePryam_Square : public Quadrangle_Pryam
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	QuadranglePryam_Square(int A) :Quadrangle_Pryam(A, A, 90, 90)
	{
	};
};
class Quadrangle_Parallel : public Quadrangle
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	Quadrangle_Parallel(int A, int B, int a, int b) :Quadrangle(A, B, A, B, a, b, a, b)
	{
	};
};
class Quadrangle_Romb : public Quadrangle
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	Quadrangle_Romb(int A, int B, int a) :Quadrangle(A, B, A, B, a, a, a, a)
	{
	};
};
//Для массивов можно просто передать аргументы с нулём либо сделать по умолчанию которая также передаёт нули
// 
//Функции
void print_info(Figure& object, std::string object_name)
{
	std::cout << object_name + ": \n";
	object.get();
	std::cout << '\n';
}

//Программа
int main()
{
	Triangle object00 (40,69,40,23,45,56);
	print_info(object00, "Any Triangle");
	Triangle_Pryam object(45,45,25,25,25);
	print_info(object,"Right Triangle");
	Triangle_RB object0(30,120,40,20);
	print_info(object0, "Isosceles Triangle");
	Triangle_RS object1(50);
	print_info(object1, "Equilateral Triangle");

	Quadrangle object2(20,20,20,20,20,20,20,20);
	print_info(object2, "Any Quadrangle");
	Quadrangle_Pryam object3(20, 20, 20, 20);
	print_info(object3, "Rectangle");
	QuadranglePryam_Square object4(60);
	print_info(object4, "Square");
	Quadrangle_Parallel object5(120, 30, 50, 70);
	print_info(object5, "Parallelogram");
	Quadrangle_Romb object6(100,40,50);
	print_info(object6, "Rhombus");
}