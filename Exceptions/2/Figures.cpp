#include <iostream>
#include "Figures.h"
class SumAngles : std::domain_error
{
public:
	const char* what()const override { return "The angles are not equal to 180"; };
};

void print_info(Figure& object, std::string object_name)
{
	std::cout << object_name + ": \n";
	object.get();
	std::cout << '\n';
}

//Программа
int main()
{

	try 
	{
	
	}
	catch (const SumAngles& a) { std::cout << a.what() << std::endl; }
	catch () { std::cout << "Unknown error" << std::endl; }
	/*
	Figure object0(0);
	print_info(object0, "Any Figure");
	Figure object00(5);
	print_info(object00, "Any Figure");
	//Треугольники
	Triangle object1(50, 70, 60, 56, 78, 89, 0);
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
	Quadrangle object5(67, 67, 50, 90, 60, 56, 78, 89, 3);
	print_info(object5, "Any Quadrangle");
	Quadrangle object55(60, 100, 90, 110, 60, 5, 5, 5, 4);
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
	*/
}