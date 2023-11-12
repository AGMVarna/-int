/* Напишете приграма, която приема от клавиатурата число
и отпечатва сумата от съставните му цифри. */

#include<iostream>
using namespace std;

long int n;
int sum = 0;

int main() {
	system("chcp 1251");
	cout << "Въведете число: "; cin >> n;
	while (n) {
		sum += n % 10;
		n /= 10;
	}cout << "Сумата от цифрите е " << sum<<endl;
	system("pause");
	return 0;
}