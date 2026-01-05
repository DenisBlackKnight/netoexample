#include <iostream>
#include <windows.h>
#include <string>

class calculator {
private:
    double num1;
    double num2;
public:
    double add() 
    {
        return num1 + num2;
    }
    double multiply() 
    {
        return num1 * num2;
    }
    double subtract_1_2() 
    {
        return num1 - num2;
    }
    double subtract_2_1() 
    {
        return num2 - num1;
    }
    double divide_1_2() 
    {
        return num1 / num2;
    }
    double divide_2_1() 
    {
        return num2 / num1;
    }
    bool set_num1(double num1)
    {
        if (num1 != 0){
            this->num1 = num1;
            return 1;
        }
        else
            return 0;
    }
    bool set_num2(double num2) 
    {
        if (num2 != 0) {
            this->num2 = num2;
            return 1;
        }
        else
            return 0;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double n1, n2;
    calculator calc1;
    while (true) 
    {
        
        std::cout << "Введите num1:";
        std::cin >> n1;
        while (calc1.set_num1(n1)!=1) 
        {
            std::cout << "Неверный ввод!\n";
            std::cout << "Введите num1:";
            std::cin >> n1;
        }


        std::cout << "Введите num2:";
        std::cin >> n2;
        while (calc1.set_num2(n2)!=1)
        {
            std::cout << "Неверный ввод!\n";
            std::cout << "Введите num2:";
            std::cin >> n2;
        }

        std::cout << "num 1 + num 2 = " << calc1.add() << "\n";
        std::cout << "num 1 - num 2 = " << calc1.subtract_1_2() << "\n";
        std::cout << "num 2 - num 1 = " << calc1.subtract_2_1() << "\n";
        std::cout << "num 1 * num 2 = " << calc1.multiply() << "\n";
        std::cout << "num 1 / num 2 = " << calc1.divide_1_2() << "\n";
        std::cout << "num 2 / num 1 = " << calc1.divide_2_1() << "\n" << std::flush;
    }
}