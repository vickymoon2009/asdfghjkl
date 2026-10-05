#include "Header1.h"
#include <iostream>
using namespace std;

int main()
{
	date date1(15, 5, 2025);
	date date2(10, 5, 2025);

	cout << "Date 1:" << endl;
	date1.Output();

	cout << endl;

	cout << "Date 2:" << endl;
	date2.Output();

	cout << endl;
	int difference = date1 - date2;

	cout << "Difference: " << difference << " days" << endl;
	cout << endl;
	date date3 = date1 + 20;
	cout << "Date 1 + 20 days:" << endl;
	date3.Output();

	return 0;
}