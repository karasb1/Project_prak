#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	float value1 = 0;
	float value2 = 0;
	cout << "Обчислення відстані між населеними пунктами." << endl;
	cout << "Введіть вихідні дані:" << endl;
	cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cin >> value1;
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "Відстань між точками, що зображують населені пункти (см) -> ";
	SetConsoleTextAttribute(hConsole, 0x05);
	cin >> value2;
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "Відстань між населеними пунктами ";
	cout << value1 * value2 << " км" << endl;
	return 0;
}