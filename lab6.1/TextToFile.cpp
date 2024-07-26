#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	system("chcp 1251");

	string text;

	ofstream out("test", ios::out | ios::binary);
	if (!out) {
		cout << "Файл открыть невозможно\n";
		return 1;
	}

	cout << "Введите текст стихотворения:"<<endl;

	cin >> text;

	out << text;

	out.close();
}