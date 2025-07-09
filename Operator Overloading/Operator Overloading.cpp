#include <iostream>
using namespace std;

class box {
public:
	int num;

	box(int n) {
		num = n;
	}

	box operator+(box other) { //"box other" is the object on the right side of +
		box temp(num + other.num);//box temp(new object) = num(left) + other.num(right)
		return temp;
	}
};

int main(void) {
	box a(5);
	box b(10);
	box c = a + b;

	cout << c.num;
	return 0;
}