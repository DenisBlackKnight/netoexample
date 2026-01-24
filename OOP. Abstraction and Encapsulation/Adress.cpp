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
	adress(std::string cityName,std::string streetName,int houseNum,int apartmentNum)
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
};

int enter_arr_adress(adress** save);
void save_nf_arr_adress(adress** save, int adress_value);

int main() 
{

	adress* arr_adress = { nullptr };
	int adress_value{enter_arr_adress(&arr_adress)};
	if (adress_value != 0) {
		save_nf_arr_adress(&arr_adress, adress_value);
		std::cout << "Save!!!";
	}
	delete [] arr_adress;
	arr_adress == nullptr;
}

int enter_arr_adress(adress** save) 
{
	int value{};
	std::ifstream file{"in.txt"};//ќткрытие файла и чтение количества элементов
	file >> value;

	if (value > 0 && file.is_open()) {
		std::string cN, sN;//пременные и создание массива дл€ указател€ на adress, *save - указатель (*save)[i] = (*(*save)+i)
		int hN, aN;
		*save = new adress[value]{};

		for (int i = 0; i < value;i++) //¬вод данных дл€ экземпл€ра
		{
			file >> cN;
			file >> sN;
			file >> hN;
			file >> aN;
			(*save)[i].set(cN,sN,hN,aN);
		}
	}
	else 
	{
		std::cout << "file corrupted or dont have values" << std::endl;
	}
	file.close();
	return value;

}
void save_nf_arr_adress(adress** save , int adress_value) 
{
	std::ofstream file {"out.txt"};
	file << adress_value<<std::endl;
	for (int i = adress_value-1; i >= 0; --i) //¬вод данных дл€ экземпл€ра
	{
		file << (*save)[i].get_output_address();
	}
}