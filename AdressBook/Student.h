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
	double get_average_score()
	{
		// Общее количество оценок
		size_t count_scores = this->scores.size();
		// Сумма всех оценок студента
		size_t sum_scores = 0;
		// Средний балл
		double average_score;
		for (size_t i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (double)sum_scores / (double)count_scores;
		return average_score;
	}

	string get_class_name()
	{
		return "Student";
	}

	string print_data()
	{
		ostringstream ss;
		ss << Person::get_data();
		ss << " Оценки студента: " << get_average_score();
		return ss.str();
	}

private:
	// Оценки студента
	vector<int> scores;
};