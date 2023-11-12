#include<iostream>
using namespace std;

/*Напишете програма, която приема от клавиатурата трицифрено число
и отпечатва сума от съставните му числа.*/

int main() {
	unsigned num, e, d, s;
	system("chcp 1251");
	cout << "Въведете трицифрено число: "; cin >> num;
	e = num % 10;
	d = (num / 10) % 10;
	s = (num / 100) % 100;
	cout << "Сумата от цифрите е: " << e + d + s << endl;
	system("pause");
	return 0;
}