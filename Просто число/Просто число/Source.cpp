/* Напишете програма, която приема от клавиатурата цяло число
и определя дали е просто или не. */

#include<iostream>
using namespace std;

int n, sum = 0;

int main() {
	system("chcp 1251");
	cout << "въведете цяло число: "; cin >> n;
	for (int i = 2; i <= n / 2; i++)
		if (n % i == 0) {
			cout << "Не е просто\n"; return 0;
		}
	cout << "Просто\n";

	system("pause");
	return 0;
}