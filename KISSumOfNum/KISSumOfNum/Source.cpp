#include<iostream>
using namespace std;

/*�������� ��������, ����� ������ �� ������������ ���������� �����
� ��������� ���� �� ���������� �� �����.*/

int main() {
	unsigned num, e, d, s;
	system("chcp 1251");
	cout << "�������� ���������� �����: "; cin >> num;
	e = num % 10;
	d = (num / 10) % 10;
	s = (num / 100) % 100;
	cout << "������ �� ������� �: " << e + d + s << endl;
	system("pause");
	return 0;
}