#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
	virtual void print() {
		cout << "parent" << endl;
	}
};

class Child : public Parent {
public:
	void print() {
		cout << "child" << endl;
	}
};


int main() {
	
	Child c1;
	Parent &p1 = c1;

	p1.print();

	cin.get();
	return 0;
}