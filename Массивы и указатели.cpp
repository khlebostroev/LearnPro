// ������� � ���������.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x = 34;
	int *p = new int;
	*p = 100;
	int a[10] = { 5, 3, 67, 45, 11, 2, 34, 16, -9, 21 };
	cout << "x = " << x << "\t\t&x = " << (int)&x << endl;
	cout << "p = " << (int)p << "\t&p = " << (int)&p << "\t*p = " << *p << endl;
	cout << "a = " << (int)a << "\t&a = " << (int)&a << "\t*a = " << *a << endl;
	delete p;
	cout << "\n����� ������� ����� �������" << endl;
	for (int i = 0; i < 10; i++)
		cout << a[i] << "\t";
	cout << endl;
	cout << "����� ������� ����� ���������" << endl;
	for (int i = 0; i < 10; i++)
		cout << *(a + i) << "\t";
	cout << endl;
		
	/*int n;
	srand(time_t(0));
	cout << "������� ������ �������> ";
	cin >> n;
	p = new int[n];
	cout << "\n������:" << endl;
	for (int i = 0; i < n; i++)
	{
		p[i] = rand() % 100;
		cout << " p[" << i << "] = " << p[i] << endl;
	}
	cout << endl;
	delete[n] p;
	cout << "������� ������ ������ �������> ";
	cin >> n;
	p = new int[n];
	cout << "\n����� ������:" << endl;
	for (int i = 0; i < n; i++)
	{
		p[i] = rand() % 100;
		cout << " p[" << i << "] = " << p[i] << endl;
	}
	cout << endl;*/

	_getch();
	return 0;
}

