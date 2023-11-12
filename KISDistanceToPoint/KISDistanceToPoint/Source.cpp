#include<iostream>
#include<cmath>
using namespace std;

/* Напишете програма, която приема от клавиатурата
координатите на точка в равнината и отпечатва на екрана
разстоянието от точката до центъра на координатната система.*/


float x, y, d;
int main() {
	system("chcp 1251");
	cout << "Въведете координатите на точката по x и y: "; cin >> x >> y;
	d = sqrt(x * x + y * y);
	cout << "Разстоянието до центъра е: " << d << endl;
	system("pause");
	return 0;
}