#pragma once
#include "Person.h"
#include <string>
#include "Student.h"
using namespace std;

class Teacher : public Person {
	
public:
	Teacher(
		string last_name,
		string name,
		string second_name,
		string phone_number,
		string subject) : Person(
		last_name,
		name,
		second_name,
		phone_number) 
		{
			this->subject = subject;
		}


	string get_subject()
	{
		return this->subject;
	}

	string get_class_name()
	{
		return "Teacher";
	}

	void add_student(Student* s)
	{
		students.push_back(s);
	}

	void students_clear()
	{
		students.clear();
	}

	Student* get_student(int i)
	{
		return students[i];
	}

	string get_students()
	{
		ostringstream ss;
		ss << " Студенты: ";
		bool firstStudentFlag = true;
		for (Student* s : students)
		{
			if (firstStudentFlag)
			{
				ss << s->get_last_name();
				firstStudentFlag = false;
			}
			else
			{
				ss << ", " << s->get_last_name();
			}

		}
		return ss.str();
	}

	string get_data()
	{
		ostringstream ss;
		ss << Person::get_data();
		ss << " Предмет: " << subject;
		
		return ss.str();
	}

private:
	// Предмет
	string subject;
	//ученики в классе учителя
	vector<Student*> students;
};
