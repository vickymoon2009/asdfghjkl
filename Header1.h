#pragma once
#include <iostream>
using namespace std;

class date
{
	int day;
	int mouth;
	int year;

public:
	date();
	date(int d, int m, int y);

	void Init(int d, int m, int y);
	void Output();

	int operator-(date obj2);
	date operator+(int days);
};