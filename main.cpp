#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter the year: ";
	cin >> year;
	bool res = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
	cout << "In this year " << 365 + res << " days" << endl;
	return 0;
}