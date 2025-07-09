#include <iostream>
#include <memory>
using namespace std;

class myClass {
public:
	myClass() {
		cout << "Constructor invoked. " << endl;     //a constructor has the same name as the class and runs automatically when an object is created.
	}
	~myClass() {
		cout << "Destructor invoked." << endl;       //a destructor also has the same name as the class and runs automatically when an object is destroyed.
	}
};

int main(void) {
	unique_ptr<int>unPtr1 = make_unique<int>(25);
	cout << unPtr1 << endl;
	cout << *unPtr1;
	unique_ptr<int>unPtr2 = move(unPtr1);            //unPtr1 becomes empty since unique pointers dont share.
	cout << *unPtr2 << endl;
	
	unique_ptr<myClass>unPtr3 = make_unique<myClass>();

	shared_ptr<myClass>shrPtr1 = make_shared<myClass>();
	cout << "Pointer is shared between: " << shrPtr1.use_count() << endl;
	{
		shared_ptr<myClass>shrPtr2 = shrPtr1;
		cout << "Pointer is shared between: " << shrPtr1.use_count() << endl;
	}
	cout << "Pointer is shared between: " << shrPtr1.use_count() << endl;
	shared_ptr<int>shrPtr3 = make_shared<int>(40);    
	weak_ptr<int>wkPtr1;    
	wkPtr1 = shrPtr3;                               //wkPtr1 becomes an owner as well but does not come up in use_count()
	 
}