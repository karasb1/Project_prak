#include <iostream>
using namespace std;

int main()
{
	int days;
	cin >> days;
	cout << days / 7 << " weeks " << days % 7 << " days." << endl;
	return 0;
}