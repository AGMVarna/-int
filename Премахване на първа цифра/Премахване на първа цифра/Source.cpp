/*�������� ��������, ����� ������ �� ������������ ����� � �������� �������� ���- ���� �����.*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
	int number,length,er; string str;
	cout << "Enter number: "; cin >> number;
	str = to_string(number);
	length = str.size();
	er = number % pow(10, length - 1);
	cout << number;

}