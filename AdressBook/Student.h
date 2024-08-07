#include "Person.h"
#include <string>
#include <vector>
#pragma once
using namespace std;

class Student : public Person {
public:
	// Конструктор класса Student
	Student(string last_name, string name, string
		second_name, string phone_number,
		vector<int> scores) : Person(last_name, name,
			second_name, phone_number) {
		this->scores = scores;
	}
	// Получение среднего балла студента
	float get_average_score()
	{
		// Общее количество оценок
		size_t count_scores = this->scores.size();
		// Сумма всех оценок студента
		size_t sum_scores = 0;
		// Средний балл
		float average_score;
		for (size_t i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}

private:
	// Оценки студента
	vector<int> scores;
};