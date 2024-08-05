#include <iostream>
#include <map>
#include <string>
using namespace std;

struct StudentGrade {
    string name;
    char grade;
};

int main() {
    system("chcp 1251");

    map<string, char> grades;

    StudentGrade student1, student2, student3;

    student1.name = "Bob";
    student1.grade = '3';

    student2.name = "Carl";
    student2.grade = '4';

    student3.name = "Mark";
    student3.grade = '5';

    
    grades[student1.name] = student1.grade;
    grades[student2.name] = student2.grade;
    grades[student3.name] = student3.grade;

    for (map<string, char>::iterator b = grades.begin(); b != grades.end(); b++)
        cout << "Имя: " << b->first << " Оценка: " << b->second << endl;

    return 0;
}