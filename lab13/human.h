#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class human {
public:
	// Конструктор класса human
	human(std::string last_name, std::string name, std::string
		second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// Получение ФИО человека
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	virtual void putData()
	{
		cout << "\nФамилия: " << last_name;
		cout << "\nИмя:" << name;
		cout << "\nОтчество:" << second_name;
	}
private:
	std::string name; // имя
	std::string last_name; // фамилия
	std::string second_name; // отчество
};

