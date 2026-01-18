#include <iostream>
#include <windows.h>
#include <string>

class Counter {
private:
    double value{ 1 };
public:
    Counter()
    {
    }
    Counter(double num)
    {
        value = num;
    }
    void increment()
    {
        ++this->value;
    }
    void decrement()
    {
        --this->value;
    }
    int view_val()
    {
        return this->value;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter * count = nullptr;
    std::string command;
    double num{0};

    std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет :";
    std::cin >> command;
    do {

        if (command == "да" || command == "Да")
        {
            std::cout << "Введите число :";
            std::cin >> num;
            count = new Counter{ num };
            break;
        }
        else if (command == "нет" || command == "Нет") 
        {
            count = new Counter;
            break;
        }
        else
            std::cout << "Неверная комманда\nВы хотите указать начальное значение счётчика ? Введите да или нет :";
    } while (std::cin >> command);


    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'):";
        std::cin >> command;

        switch (command[0]) {
        case '+':
            (*count).increment(); break;
        case '-':
            (*count).decrement(); break;
        case '=':
            std::cout << (*count).view_val()<<'\n'; break;
        case 'x':
        case 'х':break;
        }
   
    } while(!(command == "x" || command == "х"));

    delete count;
    count = nullptr;
}

