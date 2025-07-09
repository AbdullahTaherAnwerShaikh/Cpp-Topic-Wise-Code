#include <iostream>
using namespace std;

int main(void) {

	int a, b, c;
	int x = 3;

	auto sayHi = []() {
		cout << "Hello World!";
		};

	sayHi();

	auto add = [](int a,int b) {
		return a + b;
		};

	cout << add(5, 8);

	auto show =  [x]() {cout << x;};

	show();

	return 0;
}