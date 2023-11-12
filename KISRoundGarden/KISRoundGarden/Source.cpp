#include<iostream>
using namespace std;

/* Напишете програма, която приема от клавиатурата радиуса R на кръгла градина 
и отпечатва на екрана дължината на мрежата.
Необходимо е да се огради градината*/

int main() {
	system("chcp 1251");
	float R, P;
	const float pi = 3.1415;
	cout << "Въведете радиуса на градината: "; cin >> R;
	P = 2 * pi * R;
	cout << "Нужна дължина мрежа: " << P << endl;
	system("pause");
	return 0;
}