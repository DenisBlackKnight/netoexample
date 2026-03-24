#include  <iostream>

#define MODE 1

#ifndef MODE
#error cannot find the MODE
#endif

#if MODE == 1
int add(int num1, int num2);
#endif

int main() 
{
#if MODE == 0
	std::cout << "Training mode\n";
#elif MODE == 1
	std::cout << "Combat mode\n";
	int a{}, b{};
	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter second number: ";
	std::cin >> b;
	std::cout << "Result = " << add(a, b);
#else
	std::cout << "Unknown mode\n";
#endif
}

#if MODE == 1
int add(int num1, int num2)
{
	return (num1 + num2);
}
#endif