/* �������� ��������, ����� ������ ���� �����
� ��������� N M [N<M] � ��������� ������ ���� �����
������ �� 7 � ���� ��������. */

#include<iostream>
using namespace std;

int N, M;

int main() {
	system("chcp 1251");
	cout << "�������� ��� ���� �����: ";
	do { cin >> N >> M; } while (N > M);
	for (int i = 1; i <= M; i++)
		if (i % 7 == 0)
			cout << "������� ��: " << i << endl;
	system("pause");
	return 0;
}