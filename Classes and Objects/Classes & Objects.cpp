#include <iostream>
using namespace std;

class computer {
public:              //access specifier
	string company;  //these are attributes of an object.
	string model;
	int storage; 
	int ram;

	void switchOn() {     //methods are actions the object can do.
		cout << "Your laptop is turned on!";
	}
	void switchOff() {
		cout << "Your laptop is turned off!";
	}
};

int main(void) {
	computer computer1;

	computer1.company = "ASUS";  //assign an object to the class.
	computer1.model = "F15";
	computer1.storage = 500;
	computer1.ram = 16;

	cout << computer1.company <<"\n";
	cout << computer1.model << "\n";
	cout << computer1.storage << "\n";
	cout << computer1.ram << "\n";

	computer1.switchOn();
	computer1.switchOff();
	return 0;
}