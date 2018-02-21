#include <iostream>
#include <set>
#include <string>

using namespace std;

class Test {
	int id;
	string name;

public:
	Test() {

	}

	Test(int id, string name) : id(id), name(name) {

	}

	void print() const {
		cout << id << ": " << name << endl;
	}

	bool operator<(const Test other) const {
		return name < other.name;
	}
};

int main() {

	// Unique
	set<int> numbers;
	numbers.insert(50);
	numbers.insert(30);
	numbers.insert(20);
	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(40);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}
	set<int>::iterator itFind = numbers.find(30);

	if (itFind != numbers.end()) {
		cout << "Found: " << *itFind << endl;
	}

	if (numbers.count(30)) {
		cout << "Number found." << endl;
	}
	cout << endl;


	set<Test> tests;
	tests.insert(Test(10, "Mike"));
	tests.insert(Test(10, "Mike"));
	tests.insert(Test(20, "Mike"));
	tests.insert(Test(30, "Mike"));

	for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
		it->print();
	}

	cin.get();
	return 0;
}