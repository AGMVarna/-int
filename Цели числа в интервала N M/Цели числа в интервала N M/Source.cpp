/* Напишете програма, която приема цели числа
в интервала N M [N<M] и отпечатва всички цели числа
кратни на 7 в този интервал. */

#include<iostream>
using namespace std;

int N, M;

int main() {
	system("chcp 1251");
	cout << "Въведете две цели числа: ";
	do { cin >> N >> M; } while (N > M);
	for (int i = 1; i <= M; i++)
		if (i % 7 == 0)
			cout << "Числата са: " << i << endl;
	system("pause");
	return 0;
}