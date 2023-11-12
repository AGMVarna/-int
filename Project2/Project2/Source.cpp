#include<iostream>
#include <string>
#include<windows.h>
using namespace std;

void square() {
	int a, b, P, S;
	cout << "Enter the sides:" << endl;
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;
	if (a > 0 && b > 0) {
		P = 2 * (a + b);
		S = a * b;
		cout << "Perimeter is: " << P << endl;
		cout << "The Square is: " << S << endl;
	}
	else
		cout << "No such square!";
}
void triangle() {
	int a, b, c, S, P;
	cout << "Enter the sides:" << endl;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	if (a > 0 && b > 0 && c > 0) {
		S = (a * b) / 2;
		P = a + b + c;
		cout << "Perimeter is: " << P << endl;
		cout << "The Square is: " << S << endl;
	}
	else
		cout << "No such triangle!";
}
void circle() {
	int r,S,P;
	cout << "Enter the radius:" << endl;
	cout << "r= "; cin >> r;
	if (r > 0) {
		S = 3.14 * r * r;
		P = 3.14 * 2 * r;
		cout << "Perimeter is: " << P << endl;
		cout << "The Square is: " << S << endl;
	}
	else
		cout << "No such circle!";
}
int main() {
	SetConsoleOutputCP(1251);
		string choice;
		string getTri = "triangle";
		string getSqu = "square";
		string getCir = "circle";
		cout << "What form you want to calculate:"; std::getline(std::cin, choice); cout << endl;
		if (choice == getTri) {
			triangle();
		}
		else if (choice == getSqu) {
			square();
		}
		else if (choice == getCir) {
			circle();
		}
		else
			cout << "No such form";
		return main();
}
