#include <iostream>
#include <windows.h>
#include <string>

struct bank_person {
    std::string name;
    int number;
    double balance;

};

void func_balance(bank_person * a, int* summ)
{
    a->balance = *summ;
}

int main()
{
    {
        setlocale(LC_ALL, "rus");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    }
    // –усской консоли
    int summ{ 0 };
    bank_person pers;

    std::cout << "¬ведите номер счЄта:";
    std::cin >> pers.number;

    std::cout << "¬ведите им€ влалельца:";
    std::cin >> pers.name;

    std::cout << "¬ведите баланс:";
    std::cin >> pers.balance;

    std::cout << "¬ведите новый баланс:";
    std::cin >> summ;
    func_balance(&pers,&summ);

    std::cout  << "¬аш счЄт: " << pers.name << ", " << pers.number << ", " << pers.balance;
}