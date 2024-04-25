#include <iostream>
using namespace std;

int main()
{
	int hr, kop;
	cout << "Enter hryvnias: ";
	cin >> hr;
	cout << "Enter kopecks: ";
	cin >> kop;
	hr += kop / 100;
	kop %= 100;
	cout << "hryvnias: " << hr << endl;
	cout << "kopecks: " << kop << endl;
	return 0;
}