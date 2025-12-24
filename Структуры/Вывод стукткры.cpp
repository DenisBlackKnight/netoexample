#include <iostream>
#include <windows.h>
#include <string>

struct houses {
    std::string city;
    std::string street;
    int nmbr_house;
    int nmbr_apartement;
    int index;
};

void print_struct(houses* a)
{
    std::cout << "Город: " << a->city << '\n';
    std::cout << "Улица: " << a->street << '\n';
    std::cout << "Номер дома: " << a->nmbr_house << '\n';
    std::cout << "Номер квартиры: " << a->nmbr_apartement << '\n';
    std::cout << "Индекс: " << a->index << '\n' << '\n' << std::flush;
};

int main()
{
    {
        setlocale(LC_ALL, "rus");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    }
    // Русской консоли
    houses h1 = {"Москва","Арбат", 12, 8, 123456};
    houses h2 = {"Ижевск","Пушкина", 59, 143, 953769 };

    print_struct(&h1);
    print_struct(&h2);
}
