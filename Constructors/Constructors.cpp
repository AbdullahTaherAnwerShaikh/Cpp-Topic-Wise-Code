#include <iostream>
#include <string>
using namespace std;

class sidemen {
public:
	string name;
	string channelName;

	sidemen(string n, string cN) { //contructor (it makes it easier for you to add objects in a class)
		name = n;
		channelName = cN;
	};



	void display() {
		cout << "Name: " << name<<"\n";
		cout << "Channel Name: " << channelName;
	}
};

int main(void) {
	sidemen side1 = sidemen("Simon Minter", "Miniminter");
	side1.display();

	return 0;
}