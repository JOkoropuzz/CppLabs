#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Teacher : public Person {
	
public:
	Teacher(
		string last_name,
		string name,
		string second_name,
		string phone_number,
		unsigned int work_time,
		string subject) : Person(
		last_name,
		name,
		second_name,
		phone_number) 
		{
			this->work_time = work_time;
			this->subject = subject;
		}

	// Получение количества учебных часов
	unsigned int get_work_time()
	{
		return this->work_time;
	}

	string get_subject()
	{
		return this->subject;
	}

private:
	// Учебные часы
	unsigned int work_time;
	// Предмет
	string subject;
};
