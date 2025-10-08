#include <iostream>



void fibo(int x, int a = 0, int b = 1,int i = 0)
{
	int tmp=0;
	if (i < x)
	{
		if (i == 0) {
			std::cout << 0 << ' ';
			i++;
			fibo(x, a, b, i);
		}
		else if (i == 1) {
			std::cout << 1 << ' ';
			i++;
			fibo(x, a, b, i);
		}
		else
		{
			tmp = a;
			a = b;
			b += tmp;
			std::cout << b << ' ';
			i++;
			fibo(x, a, b, i);
		}
	}
	
}

void fiboMAX()
{
	unsigned long long a = 0, b = 1, tmp = 0;
	for (int i = 0; i < 80; i++)
		if (i == 0) {
			std::cout << "#" << i + 1 << ' ' << 0 << std::endl;
		}
		else if (i == 1) {
			std::cout << "#" << i + 1 << ' ' << 1 << std::endl;
		}
		else
		{
			tmp = a;
			a = b;
			b += tmp;
			std::cout << "#" << i + 1 << ' ' << b << std::endl;
		}
}

int main()
{
	setlocale(LC_ALL, "russian");
	int value=0;
	std::cout << "Введите число: ";
	std::cin >> value;

	fibo(value);

	std::cout << '\n' << "Введите любое число для усложнённого задания: ";
	std::cin >> value;

	std::cout << '\n' << "УСЛОЖНЁННОЕ" << '\n';
	fiboMAX();
}