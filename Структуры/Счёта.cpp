#include <iostream>
#include <windows.h>
#include <string>

struct bank_person {
    std::string name;
    int number;
    double balance;

};

int main()
{
    {
        setlocale(LC_ALL, "rus");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    }
    // –усской консоли

    bank_person pers;
    std::cout << "¬ведите номер счЄта:";
    std::cin >> pers.number;
    std::cout << "¬ведите им€ влалельца:";
    std::cin >> pers.name;
    std::cout << "¬ведите баланс:";
    std::cin >> pers.balance;
    std::cout << "¬ведите новый баланс:";
    std::cin >> pers.balance;
    std::cout  << "¬аш счЄт: " << pers.name << ", " << pers.number << ", " << pers.balance;
}