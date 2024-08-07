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

		cout << "���: ";
		cin >> name;
		cout << "�������: ";
		cin >> lname;
		cout << "��������: ";
		cin >> pname;
		cout << "�������: ";
		cin >> phone;
		cout << "�������: ";
		cin >> subj;
		Teacher* tch = new Teacher(lname, name, pname, phone, subj);
		contacts.addPerson(tch);
		cout << "������� ������!\n\n";
	}

	void AddStudent()
	{
		string name;
		string lname;
		string pname;
		string phone;
		int input;
		vector<int> scores;
		
		cout << "���: ";
		cin >> name;
		cout << "�������: ";
		cin >> lname;
		cout << "��������: ";
		cin >> pname;
		cout << "�������: ";
		cin >> phone;
		cout << "������� 5 ������ ����� ������: ";
		int n = 5;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			scores.push_back(input);
		}
		
		Student* std = new Student(lname, name, pname, phone, scores);
		cout << "������� ����: " << std->get_average_score();
		contacts.addPerson(std);
		cout << "\n������� ������!\n\n";
	}

	void Save()
	{
		contacts.saveToFile("Contacts.txt");
	}

	bool AddPerson()
	{
		cout << "���� �� ������ ��������?\n";
		cout << "1)�������\n";
		cout << "2)�������\n";
		cout << "0)��������� � �����\n";
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
			cout << "�������� �������!";
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
