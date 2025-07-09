#include <iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}
double sum(double a, double b) {
	return a + b;
}
float sum(float a, float b, float c) {
	return a + b + c;
}
int main(void) {
	cout << sum(5, 2) << endl;
	cout << sum(3.3, 4.4) << endl;
	cout << sum(3.3, 4.4, 5.5);

	return 0;
}