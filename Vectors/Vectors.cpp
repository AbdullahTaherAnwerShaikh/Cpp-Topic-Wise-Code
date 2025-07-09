#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	string cars[]={ "one","two","three","four" };//the array automatically sets its size unlike vector where you can add more elements.

	vector<string> cars2 = { "one","two","three","four" };//You can add more elements.
	cars2.push_back("five");//adds last element
	cout << cars2.at(0); //safer to use .at() in place of []
	cout << cars2.front();
	cout << cars2.back();
	cars2.pop_back();//removes last element
	cout << cars2.size();
	cout << cars2.empty();//output is 1 if vector is empty 
}