#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
	return (a > b) ? a : b; //(condition) ? value_if_true : value_if_false;   this is a ternary operator
}

int main(void) {
	cout<<getMax(5, 2) << endl;
	cout<<getMax('a', 'k') << endl;
	cout<<getMax(5.7, 9.3);
}