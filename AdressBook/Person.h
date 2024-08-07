#pragma once
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Person {
public:

	// Конструктор класса Person
	Person(string last_name, string name, string
		second_name, string phone_number)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
		this->phone_number = phone_number;
	}

	// Получение ФИО человека
	string get_full_name() const
	{
		ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	string get_phone_number() const
	{
		return phone_number;
	}

private:
	string name; // имя
	string last_name; // фамилия
	string second_name; // отчество
	string phone_number; //номер телефона

};

