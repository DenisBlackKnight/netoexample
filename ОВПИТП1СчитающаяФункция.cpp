#include <iostream>
#include <windows.h>
#include <string>

void counting_function() {
    static int a{0};
    a++;
    std::cout << "Количество вызовов функции counting_function(): " << a << std::endl;

}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "rus");
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}