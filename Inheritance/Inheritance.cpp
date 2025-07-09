#include <iostream>
using namespace std;

class entity {
public:
	float x = 0, y = 0;

	void move(float xa, float xb) {
		x += xa;
		y += xb;
	};
	void position() {
		cout << "x coordinates: " << x << endl;
		cout << "y coordinates: " << y << endl;
	}
};
class player : public entity {
public:
	string Name;
	player(string n) {
		Name = n;
	}
	void printName() {
		cout << Name << endl;
	}
};
int main(void) {
	player Jedi = player("Jedi");
	Jedi.move(5, 9);
	Jedi.position();
	Jedi.printName();

	return 0;
}