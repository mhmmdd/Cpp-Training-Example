#include <iostream>
#include <string>
using namespace std;

class Test {
private:
	int one{1};
	int	two{2};

public:
	void run() {
		int three{3};
		int four{4};

		auto pLambda = [&, this]() {
			one = 111;
			cout << one << endl;
			cout << two << endl;
			cout << three << endl;
			cout << four << endl;
		};
		pLambda();
	}
};

int main() {
	int one = 1;
	int two = 2;
	int three = 3;

	// Capture one and two by value 
	[one, two]() {
		cout << one << ", " << two << endl;
	}();

	// Capture all local variables by value 
	[=]() {
		cout << one << ", " << two << endl;
	}();


	// Default capture all local variables by value, but capture three by reference
	[=, &three]() {
		three = 7;
		cout << one << ", " << two << endl;
	}();
	cout << three << endl;

	// Default capture all local variables by value, but capture three by reference
	[&]() {
		three = 7;
		two = 8;
		cout << one << ", " << two << endl;
	}();
	cout << two << endl;

	// Default capture all local variables by value, but two and three by value
	[&, two, three]() {
		one = 8;
		cout << one << ", " << two << endl;
	}();
	cout << two << endl;
	cout << endl;

	/*
	* Capturing this 
	*/

	Test test;
	test.run();

	cin.get();
	return 0;
}