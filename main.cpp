#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a;
	cout << "" << endl;
	cin >> a;
	double grn = static_cast<int>(a);
	double cop = static_cast<int>((a - grn) * 100);
	cout << grn << " грн. " << cop << " коп.";

	return 0;
}