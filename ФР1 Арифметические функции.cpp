#include <iostream>
#include <string>
#include <windows.h>

//ѕрототипы
int sum(int a, int b);
int diff(int a, int b);
int multiplication(int a, int b);
double division(double a, double b);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 5, b = 10;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;

	return 0;
}

int sum(int a, int b) {
	return a + b;
}
int diff(int a, int b) {
	return a - b;
}
int multiplication(int a, int b) {
	return a * b;
}
//Ћибо дать параметрам\параметру тип double либо использовать €вное преобразование
double division(double a, double b) { 
	return static_cast <double>(a) / b;
}