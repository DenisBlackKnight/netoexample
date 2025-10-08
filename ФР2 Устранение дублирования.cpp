#include <iostream>

void xmult(int x, int value) 
{
	int res = value;
	for (int i = 0; i < x-1; i++)
		res *= value;
	std::cout << value << " в степени " << x << " = " << res << std::endl;
}

int main() 
{
	setlocale(LC_ALL, "rus");
	int value = 5, power = 2;
	xmult(power,value);

	value = 3;
	power = 3;
	xmult(power, value);

	value = 4;
	power = 4;
	xmult(power, value);
}