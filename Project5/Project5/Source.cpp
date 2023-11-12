#include <iostream>
using namespace std;

int x1, x2, x3, y01, y2, y3,a,b;
double s;

int main() {
	system("chcp 1251");
	cout << "Въведете входни данни: "; cin >> x1,y01,x2,y2,x3,y3;
	if (y2 == y3) {
		a = abs(x2 - x3); b = abs(x1 - x2);
		s = a * b / 2;
		cout << s << endl;
	}
	else cout << "Некоректни данни";
	return 0;
}
