#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b;
	float c, d;
	cout << "Обчислення швидкості бігу." << endl;
	cout << "Введіть довжину дистанції (метрів) = ";
	cin >> a;
	cout << "Введіть час (хв.сек) = ";
	cin >> b;
	cout << "Дистанція: 1000 м." << endl;
	c = static_cast<int>(b);
	d = static_cast<int>((b - c) * 100);
	cout << "Час: " << c << " хв " << d << " сек = " << c * 60 + d << "сек." << endl;
	cout << "Ви бігли зі швидкістю " << (a / 1000) / ((c * 60 + d) / 3600) << " км/год." << endl;
	return 0;
}