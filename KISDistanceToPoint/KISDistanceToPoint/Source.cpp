#include<iostream>
#include<cmath>
using namespace std;

/* �������� ��������, ����� ������ �� ������������
������������ �� ����� � ��������� � ��������� �� ������
������������ �� ������� �� ������� �� ������������� �������.*/


float x, y, d;
int main() {
	system("chcp 1251");
	cout << "�������� ������������ �� ������� �� x � y: "; cin >> x >> y;
	d = sqrt(x * x + y * y);
	cout << "������������ �� ������� �: " << d << endl;
	system("pause");
	return 0;
}