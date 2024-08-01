#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "Teacher.h"
int main()
{
	system("chcp 1251");
	// Оценкистудента
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

	student* stud = new student("Петров", "Иван", "Алексеевич", scores);

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич",
		teacher_work_time);
	stud->putData();
	tch->putData();
	return 0;

}