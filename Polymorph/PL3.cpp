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
		if (check())
			std::cout << "True\n";
		else
			std::cout << "False\n";
		std::cout << "sides_count = " << sides_count << '\n';
	}
	virtual bool check()
	{
		if (sides_count > 0)
			return 1;
		else
			return 0;
	};
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
	Triangle(int A, int B, int C, int a, int b, int c,int sides_count) :Figure(sides_count)
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
		if (check())
			std::cout << "True\n";
		else
			std::cout << "False\n";
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << "\n Sides: a = " << a << " b = " << b << " c = " << c << " \nSide's count:" << sides_count << '\n';
	};
	bool check() override
	{
		if ((A + B + C) == 180 && sides_count == 3)
			return 1;
		else
			return 0;
	};
};
class Triangle_Pryam : public Triangle
{
	//поля = A B C a b c from Triangle
public:
	//конструкторы
	Triangle_Pryam(int A, int B, int C, int a, int b, int c, int sides_count) :Triangle(A, B, C, a, b, c, sides_count)
	{};
	//методы

	bool check() override
	{
		if ((A + B + C) == 180 && C == 90 && sides_count == 3)
			return 1;
		else
			return 0;
	};
};
class Triangle_RB : public Triangle
{
	//поля = A B C a b c from Triangle
public:
	//конструкторы
	Triangle_RB(int A, int B, int C, int a, int b, int c, int sides_count) :Triangle(A, B, C, a, b, c, sides_count)
	{
	};
	//методы
	bool check() override
	{
		if ((A + B + C) == 180 && a == c && A == C && sides_count == 3)
			return 1;
		else
			return 0;
	};
};
class Triangle_RS : public Triangle
{
	//поля = A B C a b c from Triangle
public:
	//конструкторы
	Triangle_RS(int A, int B, int C, int a, int b, int c, int sides_count) :Triangle(A, B, C, a, b, c, sides_count)
	{
	};
	//методы
	bool check() override
	{
		if ((A + B + C) == 180 && A ==B && B == C && sides_count == 3)
			return 1;
		else
			return 0;
	};
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
	Quadrangle(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count) :Figure(sides_count)
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
		if (check())
			std::cout << "True\n";
		else
			std::cout << "False\n";
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << "\n Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << " \nSide's count:" << sides_count << '\n';
	};
	bool check() override
	{
		if ((A + B + C + D) == 360 && sides_count == 4)
			return 1;
		else
			return 0;
	};
};
class Quadrangle_Pryam : public Quadrangle
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	Quadrangle_Pryam(int A, int B, int C, int D, int a, int b, int c, int d,int sides_count) :Quadrangle(A,B,C,D,a,b,c,d, sides_count)
	{};
	bool check() override
	{
		if (a == c && b == d && A==90 && B==90 && C==90 && D==90 && sides_count == 4)
			return 1;
		else
			return 0;
	};
};
class QuadranglePryam_Square : public Quadrangle_Pryam
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	QuadranglePryam_Square(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count) :Quadrangle_Pryam(A, B, C, D, a, b, c, d, sides_count)
	{
	};
	bool check() override
	{
		if (a==b && a==c && a == d && A == 90 && B == 90 && C == 90 && D == 90 && sides_count == 4)
			return 1;
		else
			return 0;
	};
};
class Quadrangle_Parallel : public Quadrangle
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	Quadrangle_Parallel(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count) :Quadrangle(A, B, C, D, a, b, c, d, sides_count)
	{
	};
	bool check() override
	{
		if (a == c && b == d && A == B && A == C && A == D && A+B+C+D ==360 && sides_count == 4)
			return 1;
		else
			return 0;
	};
};
class Quadrangle_Romb : public Quadrangle
{
	//поля = A B C D a b c d from Quadrangle
public:
	//конструкторы
	Quadrangle_Romb(int A, int B, int C, int D, int a, int b, int c, int d, int sides_count) :Quadrangle(A, B, C, D, a, b, c, d, sides_count)
	{
	};
	bool check() override
	{
		if ((A+B+C+D) == 360 && sides_count == 4 && A == C && B == D && a == c && a == b && a == d)
			return 1;
		else
			return 0;
	};
};
//Для массивов можно просто передать аргументы с нулём либо сделать по умолчанию которая также передаёт нули

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
	Figure object0(0);
	print_info(object0, "Any Figure");
	Figure object00(5);
	print_info(object00, "Any Figure");
	//Треугольники
	Triangle object1(50,70,60,56,78,89,0);
	print_info(object1, "Any Triangle");
	Triangle object11(90, 0, 90, 56, 78, 89, 3);
	print_info(object11, "Any Triangle");

	Triangle_Pryam object2(50, 70, 60, 56, 78, 89, 0);
	print_info(object2, "Right Triangle");
	Triangle_Pryam object22(90, 0, 90, 56, 78, 89, 3);
	print_info(object22, "Right Triangle");

	Triangle_RB object3(50, 70, 60, 56, 78, 89, 0);
	print_info(object3, "Isosceles Triangle");
	Triangle_RB object33(90, 0, 90, 56, 78, 56, 3);
	print_info(object33, "Isosceles Triangle");

	Triangle_RB object4(50, 90, 60, 56, 78, 89, 3);
	print_info(object4, "Equilateral Triangle");
	Triangle_RB object44(60, 60, 60, 5, 5, 5, 3);
	print_info(object44, "Equilateral Triangle");

	//Четырёхугольники
	Quadrangle object5(67, 67,50, 90, 60, 56, 78, 89, 3);
	print_info(object5, "Any Quadrangle");
	Quadrangle object55(60,100,90, 110, 60, 5, 5, 5, 4);
	print_info(object55, "Any Quadrangle");

	Quadrangle_Pryam object9(67, 67, 50, 90, 60, 56, 78, 89, 4);
	print_info(object9, "Rectangle");
	Quadrangle_Pryam object99(90, 90, 90, 90, 60, 5, 60, 5, 4);
	print_info(object99, "Rectangle");

	QuadranglePryam_Square object6(90, 90, 90, 90, 50, 50, 50, 50, 3);
	print_info(object6, "Square");
	QuadranglePryam_Square object66(90, 90, 90, 90, 60, 60, 60, 60, 4);
	print_info(object66, "Square");

	Quadrangle_Parallel object7(90, 90, 90, 90, 50, 50, 50, 50, 3);
	print_info(object7, "Parallelogram");
	Quadrangle_Parallel object77(90, 90, 90, 90, 60, 60, 60, 60, 4);
	print_info(object77, "Parallelogram");

	Quadrangle_Romb object8(90, 90, 90, 90, 50, 50, 50, 50, 3);
	print_info(object8, "Rhombus");
	Quadrangle_Romb object88(100, 80, 100, 80, 80, 80, 80, 80, 4);
	print_info(object88, "Rhombus");
}