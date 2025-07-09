#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

int main(void){
	map<string, string>myDictionary;
	myDictionary.insert(pair<string, string>("strawberry", "der Erdbeere"));
	myDictionary.insert(pair<string, string>("banana", "die banane"));
	myDictionary.insert(pair<string, string>("apple", "der Apfel"));
	myDictionary.insert(pair<string, string>("orange", "der Apfelsine"));

	for (auto s : myDictionary) {
		cout << s.first <<" - "<< s.second << endl;
	}
	unordered_map<string, string>my2Dictionary;
	my2Dictionary.insert(pair<string, string>("strawberry", "der Erdbeere"));
	my2Dictionary.insert(pair<string, string>("banana", "die banane"));
	my2Dictionary.insert(pair<string, string>("apple", "der Apfel"));
	my2Dictionary.insert(pair<string, string>("orange", "der Apfelsine"));
	my2Dictionary["strawberry"] = "Die Erdbeere";
	cout << my2Dictionary.size() << endl;
	for (auto l : my2Dictionary) {
		cout << l.first << " - " << l.second << endl;
	}
	my2Dictionary.clear();
	for (auto l : my2Dictionary) {
		cout << l.first << " - " << l.second << endl;
	}
}