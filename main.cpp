#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b;
	float c, d;
	cout << "���������� �������� ���." << endl;
	cout << "������ ������� ��������� (�����) = ";
	cin >> a;
	cout << "������ ��� (��.���) = ";
	cin >> b;
	cout << "���������: 1000 �." << endl;
	c = static_cast<int>(b);
	d = static_cast<int>((b - c) * 100);
	cout << "���: " << c << " �� " << d << " ��� = " << c * 60 + d << "���." << endl;
	cout << "�� ���� � �������� " << (a / 1000) / ((c * 60 + d) / 3600) << " ��/���." << endl;
	return 0;
}