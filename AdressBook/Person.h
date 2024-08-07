#pragma once
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Person {
public:

	// ����������� ������ Person
	Person(string last_name, string name, string
		second_name, string phone_number)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
		this->phone_number = phone_number;
	}

	// ��������� ��� ��������
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
	string name; // ���
	string last_name; // �������
	string second_name; // ��������
	string phone_number; //����� ��������

};

