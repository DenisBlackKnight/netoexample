#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <fstream>

void create_game_zone      (bool*** arr_1, bool*** arr_2);//Инициализация двумерного массива
void step                  (bool*** arr_1, bool*** arr_2);//Печать и проверка значений
void copy_point            (bool*** arr_1, bool*** arr_2); //Копирование первого во второй
void print_point           (bool*** arr_1); //Отображение
void live_count(bool*** arr_1);
void stagnated (bool*** arr_1, bool*** arr_2);


namespace globalconst 
{
	int rows{ 0 }, columns{ 0 }, generation{ 1 }, cells{ 0 }, stg{ 1 };
	//Константы чтобы не усложнять список параметров
}
using namespace globalconst;

int main() 
{
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Указатели на 2 массива
	bool** arr_1{ nullptr };
	bool** arr_2{ nullptr };

	create_game_zone(&arr_1, &arr_2);//Создали
	print_point(&arr_1);
	while (cells != 0)
	{
		std::system("cls");
		step(&arr_1, &arr_2);
		if (stg == 0)
			break;
	}
	if (cells == 0)
		std::cout << "All cells are dead. Game Over";
	else if (stg == 0)
		std::cout << "The world has stagnated. Game Over";



}

void create_game_zone(bool*** arr_1, bool*** arr_2)
{
	

	//Взятие размеров поля
	std::ifstream zone("GamePoly.txt");
	zone >> rows;
	zone >> columns;

	if (rows > 0 && columns > 0) {

		//Создание двумерного массива для поля1
		*arr_1 = new bool* [rows];
		for (int i{ 0 }; i < rows; i++)
		{
			(*arr_1)[i] = new bool[columns] {0};
		}
		//Создание двумерного массива для поля2
		*arr_2 = new bool* [rows];
		for (int i{ 0 }; i < rows; i++)
		{
			(*arr_2)[i] = new bool[columns] {0};
		}

		//Присвоение 1 для живых позиций
		int x{ 0 }, y{ 0 };
		while (zone >> x)
		{
	
			if (zone >> y) {
				(*arr_1)[x][y] = 1;
				cells++;
			}
			
		}
		//Копирование массива
		copy_point(arr_1,arr_2);
	}
}

void step(bool*** arr_1, bool*** arr_2)
{
	for (int i{ 0 }; i < rows; ++i) 
	{
		for (int j{ 0 }; j < columns; ++j)
		{
			int lives{ 0 };

			//Проверка 3х3 при 1 
			if(arr_2[0][i][j]==1)
			{
			
				
				for (int ip{ i-1 }; ip < i+2; ++ip)
				{
					for (int jp{ j-1 }; jp < j+2; ++jp)
					{
						if ((ip<0 || ip ==rows) || (jp <0 || jp == columns))
							continue;
						if (ip == i && jp == j)
							continue;//Пропуски

						if (arr_2[0][ip][jp] == 1)
							++lives;
						
					}
				}
				if (!(lives == 2 || lives == 3))
					arr_1[0][i][j] = 0;
				lives == 0;

			}
			//Проверка 3х3 при 0
			else if(arr_2[0][i][j] == 0)
			{
				int lives{ 0 };
				for (int ip{ i - 1 }; ip < i + 2; ++ip)
				{
					for (int jp{ j - 1 }; jp < j + 2; ++jp)
					{
						if ((ip<0 || ip == rows) || jp <0 || jp == columns)
							continue;
						if (ip == i && jp == j)
							continue;//Пропуски

						if (arr_2[0][ip][jp] == 1)
							++lives;

					}
				}
				if (lives == 3)
					arr_1[0][i][j] = 1;
				lives == 0;
			}
		}
	}
	//Добавление
	++generation;
	stagnated(arr_1, arr_2);
	copy_point(arr_1, arr_2);
	live_count(arr_1);
	print_point(arr_1);

}


void copy_point(bool*** arr_1, bool*** arr_2)
{
	for (int i{ 0 }; i < rows; ++i)
	{
		for (int j{ 0 }; j < columns; ++j)
		{
			(*arr_2)[i][j] = (*arr_1)[i][j];
		}
	}
}

void print_point(bool*** arr_1)

{
	//print arr_x for testing
	for (int i{ 0 }; i < rows; i++)
	{
		for (int j{ 0 }; j < columns; j++)
		{
			if((*arr_1)[i][j]==1)
			std::cout << "*";
			else
				std::cout << "-";
		}
		std::cout << std::endl;
	}
	std::cout << "Generation:" << generation << " | " << "cells: " << cells;
	std::cout << std::endl;
	Sleep(1000);
}

void live_count(bool*** arr_1) {
	cells = 0;
	for (int i{ 0 }; i < rows; i++)
	{
		for (int j{ 0 }; j < columns; j++)
		{
			if ((*arr_1)[i][j] == 1)
				++cells;
		}
	}
}
void stagnated(bool*** arr_1, bool*** arr_2) 
{
	stg = 0;
	for (int i{ 0 }; i < rows; i++)
	{
		for (int j{ 0 }; j < columns; j++)
		{
			if ((*arr_1)[i][j] != (*arr_2)[i][j])
				++stg;
		}
	}
}