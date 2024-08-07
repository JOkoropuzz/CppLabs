#include <iostream>
#include <vector>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
int main()
{
	system("chcp 1251");

	// Оценки студента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	
	Person* stud = new Student("Петров", "Иван", "Алексеевич", "2342343", scores);

	unsigned int teacher_work_time = 40;
	Teacher* tch = new Teacher("Сергеев", "Дмитрий", "Сергеевич", "2342343",
		teacher_work_time, "Алгебра");

	
	stud->get_full_name();
	tch->get_full_name();

	return 0;

}