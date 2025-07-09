#include<iostream>
using namespace std;

int main(void) {
	int num = 10;

	int& temp = num; //Temp has the same address as num.

	cout << temp << endl;

	num = 15;

	cout << temp << endl;

	temp = 20;

	cout << temp;
}