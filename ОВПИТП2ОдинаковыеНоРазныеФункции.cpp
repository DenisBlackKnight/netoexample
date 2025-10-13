#include <iostream>
#include <windows.h>
#include <string>

namespace arithmetic {

    namespace sum 
    {
        void calc(int x, int y) {
            std::cout << "Сложение: " << x + y << std::endl;
        }
    }

    namespace diff 
    {
        void calc(int x, int y) {
            std::cout << "Вычитание: " << x - y << std::endl;
        }
    }

    namespace multiplication 
    {
        void calc(int x, int y) {
            std::cout << "Умножение: " << x * y << std::endl;
        }
    }

    namespace division 
    {
        void calc(int x, int y) {
            std::cout << "Деление: " << x / y << std::endl;
        }
    }
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x = 6, y = 9;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    arithmetic::sum::calc(x,y);
    arithmetic::diff::calc(x, y);
    arithmetic::multiplication::calc(x, y);
    arithmetic::division::calc(x, y);

}