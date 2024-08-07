#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h"
#include "Person.h"
#include "Teacher.h"
#include "Collection.h"

using namespace std;

class AdressBookEngine
{
private:
	Collection contacts;

public:
	AdressBookEngine() {}
	~AdressBookEngine() {}

	void AddTeacher()
	{
		string name;
		string lname;
		string pname;
		string phone;
		string subj;

		cout << "Имя: ";
		cin >> name;
		cout << "Фамилия: ";
		cin >> lname;
		cout << "Отчество: ";
		cin >> pname;
		cout << "Телефон: ";
		cin >> phone;
		cout << "Предмет: ";
		cin >> subj;
		Teacher* tch = new Teacher(lname, name, pname, phone, subj);
		contacts.addPerson(tch);
		cout << "Контакт создан!\n\n";
	}

	void AddStudent()
	{
		string name;
		string lname;
		string pname;
		string phone;
		int input;
		vector<int> scores;
		
		cout << "Имя: ";
		cin >> name;
		cout << "Фамилия: ";
		cin >> lname;
		cout << "Отчество: ";
		cin >> pname;
		cout << "Телефон: ";
		cin >> phone;
		cout << "Введите 5 оценок через пробел: ";
		int n = 5;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			scores.push_back(input);
		}
		
		Student* std = new Student(lname, name, pname, phone, scores);
		cout << "Средний балл: " << std->get_average_score();
		contacts.addPerson(std);
		cout << "\nКонтакт создан!\n\n";
	}

	void Save()
	{
		contacts.saveToFile("Contacts.txt");
	}

	bool AddPerson()
	{
		cout << "Кого вы хотите добавить?\n";
		cout << "1)Студент\n";
		cout << "2)Учитель\n";
		cout << "0)Сохранить и выйти\n";
		int answer;
		cin >> answer;
		switch (answer)
		{
		case 0:
			Save();
			return true;
		case 1:
			AddStudent();
			break;
		case 2:
			AddTeacher();
			break;
		default:
			cout << "Неверная команда!";
			break;
		}
		return false;
	}

	void run()
	{
		bool exitFlag = false;
		while (!exitFlag)
		{
			exitFlag = AddPerson();
		}
	}
};
