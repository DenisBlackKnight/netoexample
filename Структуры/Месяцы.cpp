#include <iostream>
#include <windows.h>
#include <string>


int main()
{
    {
        setlocale(LC_ALL, "rus");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    }
    // Русской консоли
    enum class months
    {
        January = 1,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };

    int month;
    
    do {
        std::cout << "Введите число с 1 по 12:";
        std::cin >> month;
        switch (static_cast<months>(month)) 
        {
            case months::January:
                std::cout << "Январь" << std::endl;
                break;
            case months::February:
                std::cout << "Февраль" << std::endl;
                break;
            case months::March:
                std::cout << "Март" << std::endl;
                break;
            case months::April:
                std::cout << "Апрель" << std::endl;
                break;
            case months::May:
                std::cout << "Май" << std::endl;
                break;
            case months::June:
                std::cout << "Июнь" << std::endl;
                break;
            case months::July:
                std::cout << "Июль" << std::endl;
                break;
            case months::August:
                std::cout << "Август" << std::endl;
                break;
            case months::September:
                std::cout << "Сентябрь" << std::endl;
                break;
            case months::October:
                std::cout << "Октябрь" << std::endl;
                break;
            case months::November:
                std::cout << "Ноябрь" << std::endl;
                break;
            case months::December:
                std::cout << "Декабрь" << std::endl;
                break;
            default:
                std::cout << "Неправильный номер!" << std::endl;
        }

    } while (month != 0);
    std::cout << "До свидания";
    

}
