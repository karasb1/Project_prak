#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	float volume = 0;
	float res = 0;
	cout << "Enter the volume of the ball: " << endl;
	cin >> volume;
	res = (4* 3.14*pow(volume,3))/3;
	cout << res << endl;
	return 0;
}