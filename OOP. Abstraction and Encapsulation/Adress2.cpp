#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

class adress
{
private:
	std::string cityName{};
	std::string streetName{};
	int houseNum{};
	int apartmentNum{};
public:
	adress(std::string cityName, std::string streetName, int houseNum, int apartmentNum)
	{
		this->cityName = cityName;
		this->streetName = streetName;
		this->houseNum = houseNum;
		this->apartmentNum = apartmentNum;
	}
	adress()
	{
	}
	void set(std::string cityName, std::string streetName, int houseNum, int apartmentNum)
	{
		this->cityName = cityName;
		this->streetName = streetName;
		this->houseNum = houseNum;
		this->apartmentNum = apartmentNum;

	}
	std::string get_output_address()
	{

		return cityName + ", " + streetName + ", " + std::to_string(houseNum) + ", " + std::to_string(apartmentNum) + ".\n";
	}
	void sort(adress** save, int adress_value)
	{
		adress a{ "","",0,0};//для хранения буфер
		for (int i = 0; i < adress_value; i++)
		{
			for (int j = 0; j+1 < adress_value; j++)
			{
				if ((*save)[j+1].cityName[0] > (*save)[j].cityName[0])
				{
					a.cityName = (*save)[j].cityName;//Сохранение в буфер
					a.streetName = (*save)[j].streetName;
					a.houseNum = (*save)[j].houseNum;
					a.apartmentNum = (*save)[j].apartmentNum;

					(*save)[j].cityName = (*save)[j+1].cityName; // Вставка если больше
					(*save)[j].streetName = (*save)[j+1].streetName;
					(*save)[j].houseNum = (*save)[j+1].houseNum;
					(*save)[j].apartmentNum = (*save)[j+1].apartmentNum;

					(*save)[j+1].cityName = a.cityName;//Замена
					(*save)[j+1].streetName = a.streetName;
					(*save)[j+1].houseNum = a.houseNum;
					(*save)[j+1].apartmentNum = a.apartmentNum;
				}
			}
		}
		
	}
};

int enter_arr_adress(adress** save);                       //Чтение 
void save_nf_arr_adress(adress** save, int adress_value);  //Сохранение

int main()
{

	adress* arr_adress = { nullptr };
	int adress_value{ enter_arr_adress(&arr_adress) };
	if (adress_value != 0) {
		arr_adress->sort(&arr_adress, adress_value);
		save_nf_arr_adress(&arr_adress, adress_value);
		std::cout << "Save!!!";
	}
	delete[] arr_adress;
	arr_adress = nullptr;
}

int enter_arr_adress(adress** save)
{
	int value{};
	std::ifstream file{ "in2.txt" };//Открытие файла и чтение количества элементов
	file >> value;

	if (value > 0 && file.is_open()) {
		std::string cN, sN;//пременные и создание массива для указателя на adress, *save - указатель (*save)[i] = (*(*save)+i)
		int hN, aN;
		*save = new adress[value]{};

		for (int i = 0; i < value; i++) //Ввод данных для экземпляра
		{
			file >> cN;
			file >> sN;
			file >> hN;
			file >> aN;
			(*save)[i].set(cN, sN, hN, aN);
		}
	}
	else
	{
		std::cout << "file corrupted or dont have values" << std::endl;
	}
	file.close();
	return value;

}
void save_nf_arr_adress(adress** save, int adress_value)
{
	std::ofstream file{ "out2.txt" };
	file << adress_value << std::endl;
	for (int i = adress_value - 1; i >= 0; --i) //Ввод данных в файл из экземпляра
	{
		file << (*save)[i].get_output_address();
	}
}