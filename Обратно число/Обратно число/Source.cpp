/* �������� ��������, ����� ������ �� ������������ 
���� ����� � ��������� �������� �������. */

#include<iostream>
using namespace std;

int n, on=0;

int main() {
	system("chcp 1251");
	cout << "�������� ���� �����: "; cin >> n;
	while (n) {
		on = on * 10 + (n % 10);
		n /= 10;
	}cout << "��������� �� n �: " << on << endl;
	system("pause");
	return 0;
}