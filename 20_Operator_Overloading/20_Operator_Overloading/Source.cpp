#include <iostream>
#include <string>

using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test() : id(0), name("") {

	}

	Test(int id, string name) : id(id), name(name) {

	}
	
	void print() {
		cout << id << ": " << name << endl;
	}

	const Test &operator=(const Test &other) {
		cout << "Assignment running" << endl;
		
		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test &other) {
		cout << "Copy constructor running" << endl;
		*this = other;
	}
};

int main() {
	Test test1(10, "Mike");
	cout << "Print test 1" << flush;
	test1.print();

	Test test2(20, "Bob");

	test2 = test1;
	cout << "Print test 2" << flush;
	test2.print();

	Test test3;
	test3.operator=(test2);
	test3.print();

	cout << endl;

	// copy initialization
	Test test4 = test1;
	test4.print();

	cin.get();
	return 0;
}