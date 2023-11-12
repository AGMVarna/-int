/* Напишете програма, която приема от клавиатурата 
цяло число и отпечатва неговото обратно. */

#include<iostream>
using namespace std;

int n, on=0;

int main() {
	system("chcp 1251");
	cout << "Въведете цяло число: "; cin >> n;
	while (n) {
		on = on * 10 + (n % 10);
		n /= 10;
	}cout << "Обратното на n е: " << on << endl;
	system("pause");
	return 0;
}