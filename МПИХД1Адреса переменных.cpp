#include <iostream>
#include <windows.h>
#include <string>


int main()
{
	int a         { 0 };
	short b       { 0 };
	long c        { 0 };
	long long d   { 0 };
	float e       { 0 };
	double f      { 0 };
	long double g { 0 };
	bool h        { 0 };


	setlocale(LC_ALL, "rus");
	std::cout << "short: " << '\t' << '\t' << &b << ' ' << sizeof(b) << std::endl;
	std::cout << "int: " << '\t' << '\t' << &a << ' ' << sizeof(a) << std::endl;
	std::cout << "long: " << '\t' << '\t' << &c << ' ' <<  sizeof(c) << std::endl;
	std::cout << "long long: " << '\t' << &d << ' ' <<  sizeof(d) << std::endl;
	std::cout << "float: " << '\t' << '\t' << &e << ' ' <<  sizeof(e) << std::endl;
	std::cout << "double: " << '\t' << &f << ' ' <<  sizeof(f) << std::endl;
	std::cout << "long double: " << '\t' << &g << ' ' <<  sizeof(g) << std::endl;
	std::cout << "bool: " << '\t' << '\t' << &h << ' ' <<  sizeof(h);
}
