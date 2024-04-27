#include <iostream>
using namespace std;

int main()
{
	int seconds, minutes, hours;
	cin >> seconds;
	cout << seconds/2;
	cout << "hours: " << seconds / 3600 << endl;
	cout << "minutes: " << seconds % 3600 / 60 << endl;
	cout << "seconds: " << seconds % 3600 % 60 << endl;

	return 0;
}