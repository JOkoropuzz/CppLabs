#include "Time.h"
#include <string>
#include <iostream>
#include "DayEndExeption.h"

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
	if (h > 23 || h < 0)
	{
		throw DayEndExeption();
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
		throw DayEndExeption();
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


Time Time::operator+ (const Time& d2) const
{
	int h = houres + d2.houres;
	int m = minutes + d2.minutes;
	int s = seconds + d2.seconds;

	if (s >= 60)
	{
		m++;
		s -= 60;
	}

	if (m >= 60)
	{
		h++;
		m -= 60;
	}

	return Time(h, m, s);
}

Time Time::operator+ (const int& d2) const
{
	int h = houres + d2;
	int m = minutes;
	int s = seconds;

	if (s >= 60)
	{
		m++;
		s -= 60;
	}

	if (m >= 60)
	{
		h++;
		m -= 60;
	}

	return Time(h, m, s);
}

Time Time::operator- (const Time& d2) const
{
	int h = houres - d2.houres;
	int m = minutes - d2.minutes;
	int s = seconds - d2.seconds;

	if (s < 0)
	{
		m--;
		s += 60;
	}

	if (m < 0)
	{
		h--;
		m += 60;
	}

	return Time(h, m, s);
}

Time Time::operator- (const int& d2) const
{
	int h = houres - d2;
	int m = minutes;
	int s = seconds;

	if (s < 0)
	{
		m--;
		s += 60;
	}

	if (m < 0)
	{
		h--;
		m += 60;
	}

	return Time(h, m, s);
}

bool Time::operator== (const Time& d2) const
{
	if (houres == d2.houres && minutes == d2.minutes && seconds == d2.seconds) return true;
	else return false;
}

bool Time::operator> (const Time& d2) const
{
	if (houres == d2.houres)
	{
		if (minutes == d2.minutes)
		{
			if (seconds == d2.seconds)
			{
				return false;
			}
			else
			{
				if (seconds > d2.seconds) return true;
				
				else return false;
			}
		}
		else
		{
			if (minutes > d2.minutes) return true;
			
			else return false;
		}
	}
	else
	{
		if (houres > d2.houres) return true;
		else return false;

	}
}

bool Time::operator< (const Time& d2) const
{
	if (houres == d2.houres)
	{
		if (minutes == d2.minutes)
		{
			if (seconds == d2.seconds)
			{
				return false;
			}
			else
			{
				if (seconds > d2.seconds) return false;

				else return true;
			}
		}
		else
		{
			if (minutes > d2.minutes) return false;

			else return true;
		}
	}
	else
	{
		if (houres > d2.houres) return false;
		else return true;

	}
}

bool Time::operator>= (const Time& d2) const
{
	if (houres == d2.houres)
	{
		if (minutes == d2.minutes)
		{
			if (seconds == d2.seconds)
			{
				return true;
			}
			else
			{
				if (seconds > d2.seconds) return true;

				else return false;
			}
		}
		else
		{
			if (minutes > d2.minutes) return true;

			else return false;
		}
	}
	else
	{
		if (houres > d2.houres) return true;
		else return false;

	}
}

bool Time::operator<= (const Time& d2) const
{
	if (houres == d2.houres)
	{
		if (minutes == d2.minutes)
		{
			if (seconds == d2.seconds)
			{
				return true;
			}
			else
			{
				if (seconds > d2.seconds) return false;

				else return true;
			}
		}
		else
		{
			if (minutes > d2.minutes) return false;

			else return true;
		}
	}
	else
	{
		if (houres > d2.houres) return false;
		else return true;

	}
}