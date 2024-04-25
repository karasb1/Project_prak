#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	float value1 = 0;
	float value2 = 0;
	float value3 = 0;
	cout << "Обчислення об'єму пралелепіпеда." << endl;
	cout << "Введіть вихідні дані:" << endl;
	cout << "Довжина (см) -> ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cin >> value1;
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "Ширина (см) -> ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cin >> value2;
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "Висота (см) -> ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cin >> value3;
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "Об'єм: ";
	cout << setprecision(6) << value1 * value2 * value3 << " куб.см." << endl;
	return 0;
}