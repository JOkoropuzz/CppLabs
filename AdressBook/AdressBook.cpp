#include <iostream>
#include <vector>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include "AdressBookEngine.h"
int main()
{
	system("chcp 1251");

	AdressBookEngine adressBook = AdressBookEngine();
	adressBook.run();

	return 0;

	

	//// Оценки студента
	//std::vector<int> scores;
	//// Добавление оценок студента в вектор
	//scores.push_back(5);
	//scores.push_back(3);
	//scores.push_back(4);
	//scores.push_back(4);
	//scores.push_back(5);
	//scores.push_back(3);
	//scores.push_back(3);
	//scores.push_back(3);
	//scores.push_back(3);
	//
	//Student* stud = new Student("Петров", "Иван", "Алексеевич", "2342343", scores);
	//Student* stud3 = new Student("Шляпов", "Иван", "Алексеевич", "2342343", scores);

	//unsigned int teacher_work_time = 40;
	//Teacher* tch = new Teacher("Сергеев", "Дмитрий", "Сергеевич", "2342343",
	//	teacher_work_time, "Алгебра");
	//tch->add_student(stud);
	//Student* std2 = tch->get_student(0);
	//std2->get_full_name();
	//stud->get_full_name();
	//tch->get_full_name();
	//tch->add_student(stud3);

	//tch->print_data();

	return 0;

}