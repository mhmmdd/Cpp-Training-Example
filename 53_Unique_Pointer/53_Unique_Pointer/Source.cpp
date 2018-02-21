#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Test {
public:
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "Hello" << endl;
	}

	~Test() {
		cout << "destroyed" << endl;
	}

};

class Temp {
private:
	unique_ptr<Test[]> pTest;

public:
	Temp(): pTest(new Test[2]) {

	}
};


int main() {

	{
		unique_ptr<Test[]> pTest(new Test[2]);
		pTest[2].greet();
	}

	cout << "Finished" << endl;

	cin.get();
	return 0;
}