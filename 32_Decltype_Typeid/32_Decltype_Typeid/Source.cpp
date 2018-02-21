#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;


int main() {

	int value;
	double dValue;
	string sValue;

	cout << "int: " << typeid(value).name() << endl;
	cout << "double: " << typeid(dValue).name() << endl;
	cout << "string: " << typeid(sValue).name() << endl;
	cout << endl;


	decltype(sValue) name = "Bob";

	cout << "name: " << typeid(sValue).name() << endl;
	cout << name << endl;

	cin.get();
	return 0;
}