#include <iostream>
using namespace std;
int addNum(int a, int b) {
	int c;
	c = a + b;
	return c;
	//functions can return a value but not display.
}
int main(void) {
	int a, b, c;
	cout << "Give 1st integers: ";
	cin >> a;
	cout << "Give 2nd integers: ";
	cin >> b;
	//assign the function to a variable as it returns a value.
	c=addNum(a, b);
	cout << c;

	return 0;
}