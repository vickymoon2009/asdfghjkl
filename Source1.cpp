#include "Header1.h"
#include <iostream>
using namespace std;

date::date()
{
	day = 1;
	mouth = 1;
	year = 2000;
}

date::date(int d, int m, int y)
{
	Init(d, m, y);
}

void date::Init(int d, int m, int y)
{
	day = d;
	mouth = m;
	year = y;
}

void date::Output()
{
	cout << "Day: " << day << endl
		<< "Month: " << mouth << endl
		<< "Year: " << year << endl;
}
int date::operator-(date obj2)
{
	int d1 = year * 365 + (mouth - 1) * 30 + day;
	int d2 = obj2.year * 365 + (obj2.mouth - 1) * 30 + obj2.day;

	return d1 - d2;
}
date date::operator+(int days)
{
	date result = *this;

	result.day += days;

	while (result.day > 30)
	{
		result.day -= 30;
		result.mouth++;

		if (result.mouth > 12)
		{
			result.mouth = 1;
			result.year++;
		}
	}

	return result;
}