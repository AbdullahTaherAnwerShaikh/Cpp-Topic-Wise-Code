#include <iostream>
using namespace std;

int main(void) {

	string name = "Jaggu";
	int age = 12;
	string cars[5] = { "bmw","mclaren","audi","renault","toyota" };

	string *pName = &name; // & : address-of operator. * : dereference operator
	int *pAge = &age;
	string* pCars = cars; //this already is the address of the array which is then assigned to pCars.
	string* pCars1 = &cars[1]; //gives the address of the element not the array.

	cout << pName << endl;
	cout << pAge << endl;
	cout << cars << endl;
	cout << pCars << endl;
	cout << pCars1 << endl;
	cout << *pName << endl;
	cout << *pAge;

	

	return 0;
}