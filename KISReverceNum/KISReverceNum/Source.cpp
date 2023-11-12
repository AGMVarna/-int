#include<iostream>
using namespace std;

/* Обърнете числото, въведено от клавуатурата.*/

int main() {
	unsigned num, e, d, s;
	system("chcp 1251");
	cout << "Въведете трицифрено число: "; cin >> num;
	e = num % 10;
	d = (num / 10) % 10;
	s = (num / 100) % 100;
	cout << "Обратното на " << num << " е " << e * 100 + d * 10 + s << endl;
	system("pause");
	return 0;
}