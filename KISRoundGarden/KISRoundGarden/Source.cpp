#include<iostream>
using namespace std;

/* �������� ��������, ����� ������ �� ������������ ������� R �� ������ ������� 
� ��������� �� ������ ��������� �� �������.
���������� � �� �� ������ ���������*/

int main() {
	system("chcp 1251");
	float R, P;
	const float pi = 3.1415;
	cout << "�������� ������� �� ���������: "; cin >> R;
	P = 2 * pi * R;
	cout << "����� ������� �����: " << P << endl;
	system("pause");
	return 0;
}