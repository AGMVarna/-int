/* �������� ��������, ����� ������ �� ������������ ���� �����
� ��������� ���� �� ���������� �� �����. */

#include<iostream>
using namespace std;

long long int n;
int sum = 0;

int main() {
	system("chcp 1251");
	cout << "�������� �����: "; cin >> n;
	while (n) {
			n = n / 10;
			sum++;
	}cout << "���� �� ������� � " << sum << endl;
	system("pause");
	return 0;
}