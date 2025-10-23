#include <iostream>
#include <windows.h>
#include <string>

int arr_print(char* chptr, int size);
int arr_print(int* intptr, int size);

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    const int sizearr{ 7 };
    char charr[20]={ 'H','e','l','l','o' };
    int intarr[sizearr]{ 6,7,4,8,9,5,3 };

    arr_print(charr,20);
    arr_print(intarr,sizearr);

    return 0;
}

int arr_print(char* chptr, int size)
{

    for (int i{ 0 }; i < size; ++i) 
    {
        std::cout << *(chptr+i) << ' ';
    }
    std::cout << '\n' << std::flush;

    return EXIT_SUCCESS;
}
int arr_print(int* intptr, int size)
{

    for (int i{ 0 }; i < size; ++i)
    {
        std::cout << intptr[i] << ' ';
    }
    std::cout << '\n' << std::flush;

    return EXIT_SUCCESS;
}