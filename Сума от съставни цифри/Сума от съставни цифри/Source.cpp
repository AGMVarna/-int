/* �������� ��������, ����� ������ �� ������������ �����
� ��������� ������ �� ���������� �� �����. */

#include<iostream>
using namespace std;

long int n;
int sum = 0;

int main() {
	system("chcp 1251");
	cout << "�������� �����: "; cin >> n;
	while (n) {
		sum += n % 10;
		n /= 10;
	}cout << "������ �� ������� � " << sum<<endl;
	system("pause");
	return 0;
}