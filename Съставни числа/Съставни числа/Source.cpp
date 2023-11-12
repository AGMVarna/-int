/* Напишете програма, която приема от клавиатурата цяло число
и отпечатва броя на съставните му числа. */

#include<iostream>
using namespace std;

long long int n;
int sum = 0;

int main() {
	system("chcp 1251");
	cout << "Въведете число: "; cin >> n;
	while (n) {
			n = n / 10;
			sum++;
	}cout << "Броя на цифрите е " << sum << endl;
	system("pause");
	return 0;
}