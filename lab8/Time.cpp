#include "Time.h"
#include <string>
#include <iostream>

using namespace std;

Time::Time(int h, int m, int s)
{
	if (s > 60)
	{
		int c = s / 60;
		m += c;
		s -= c * 60;
	}
	if (m > 60)
	{
		int c = m / 60;
		h += c;
		m -= c * 60;
	}
	if (h > 23)
	{
		int c = h / 24;
		h -= c * 24;
	}
	Time::set_houres(h);
	Time::set_minutes(m);
	Time::set_seconds(s);
}

Time::Time()
{
	Time::set_houres(0);
	Time::set_minutes(0);
	Time::set_seconds(0);
}

Time::Time(int seconds)
{
	int ostatok;
	if (seconds / 3600 > 23)
	{
		seconds -= 86400;
	}
	Time::set_houres(seconds / 3600);
	ostatok = seconds % 3600;
	Time::set_minutes(ostatok / 60);
	ostatok = ostatok % 60;
	Time::set_seconds(ostatok);
}

void Time::set_houres(int h)
{
	Time::houres = h;
}

int Time::get_houres()
{
	return Time::houres;
}

void Time::set_minutes(int h)
{
	Time::minutes = h;
}

int Time::get_minutes()
{
	return Time::minutes;
}

void Time::set_seconds(int h)
{
	Time::seconds = h;
}

int Time::get_seconds()
{
	return Time::seconds;
}

const Time Time::Add(Time t)
{
	int result;
	

	int seconds_input = t.get_houres() * 3600 + t.get_minutes() * 60 + t.get_seconds();
	int seconds = get_houres() * 3600 + get_minutes() * 60 + get_seconds();

	result = seconds + seconds_input;
	Time tres = Time(result);
	return tres;
	
	
}

const void Time::TimeShow()
{
	cout << get_houres() << ":" << get_minutes() << ":" << get_seconds() << endl;
}