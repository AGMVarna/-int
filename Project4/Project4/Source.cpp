#include<iostream>
#include<cmath>
using namespace std;



int main() {
	system("cpch 1251");
	int h, m, ml, flyTime,hours,mins;
	cout << "Въведете часа и минутите на излитане: "; cin >> h >> m;
	cout << "Въведете продължителността на полетаю: "; cin >> ml;
	flyTime = (h * 60) + m + ml;
	hours = (flyTime / 60)%24;
	mins = flyTime % 60;
	system("pause");
	return 0;
}
