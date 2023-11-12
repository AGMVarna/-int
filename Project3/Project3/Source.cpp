#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float P, S;
	float x1, x2, y1, y2, sideOne, sideTwo;
	cout << "Enter x1:"; cin >> x1; cout << endl;
	cout << "Enter y1:"; cin >> y1; cout << endl;
	cout << "Enter x2:"; cin >> x2; cout << endl;
	cout << "Enter y2:"; cin >> y2; cout << endl;
	if (x1 > x2) {
		sideOne = x1 - x2;
	}
	else {
		sideOne = x2 - x1;
	}
	if (y1 > y2) {
		sideTwo = y1 - y2;
	}
	else {
		sideTwo = y2 - y1;
	}
	P = 2 * (sideOne + sideTwo);
	S = sideOne * sideTwo;
	cout << "The Area is: " << S << endl;
	cout << "The Perimeter is:" << P << endl;
	return 0;
}