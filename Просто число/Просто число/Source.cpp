/* �������� ��������, ����� ������ �� ������������ ���� �����
� �������� ���� � ������ ��� ��. */

#include<iostream>
using namespace std;

int n, sum = 0;

int main() {
	system("chcp 1251");
	cout << "�������� ���� �����: "; cin >> n;
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0) {
			cout << "�� � ������\n"; return 0;
		}
	cout << "������\n";

	system("pause");
	return 0;
}