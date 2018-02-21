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
		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test &other) {
		*this = other;
	}

	friend ostream &operator<<(ostream &out, const Test &test) {
		out << test.id << ": " << test.name;
		return out;
	}
};

int main() {
	Test test1(10, "Mike");
	Test test2(20, "Bob");

	cout << test1 << endl;
	cout << test1 << test2 << endl;

	cin.get();
	return 0;
}