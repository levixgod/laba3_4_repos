// Lab_03_4.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	double R2; // �������� ������ ������� ����

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	R2 = R * -1;

	// ������������ � ����� ����
	if ((pow((x - R), 2) + pow((y - R), 2) <= R * R && x > y) || ((pow((x - R2), 2) + pow((y - R2), 2) <= R2 * R2 && x < y)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}