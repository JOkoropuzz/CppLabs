#pragma once 
#include <string>

using namespace std;

class Time
{
public:

	Time(int, int, int);
	Time(int);
	Time();

	void set_houres(int);
	int get_houres();


	void set_minutes(int);
	int get_minutes();

	void set_seconds(int);
	int get_seconds();

	const Time Add(Time);
	const void TimeShow();

private:

	int houres;
	int minutes;
	int seconds;
};

