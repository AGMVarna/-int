/*Напишете програма, която приема от клавиатурата число и премахва неговата най- лява цифра.*/

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