// Lab_03_4.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	double R2; // параметр радіусу другого кола

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	R2 = R * -1;

	// розгалуження в повній формі
	if ((pow((x - R), 2) + pow((y - R), 2) <= R * R && x > y) || ((pow((x - R2), 2) + pow((y - R2), 2) <= R2 * R2 && x < y)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}