#include <iostream>
#include <functional>
#include <string>

using namespace std;
using namespace placeholders;

class Test {
public:
	int add(int a, int b, int c) {
		cout << a << ", " << b << ", " << c << endl;
		return a + b + c;
	}

};

int run(function<int(int, int)> func) {
	return func(7, 3);
}

int main() {

	Test test;

	auto calculate = bind(&Test::add, test, _2, _1, _3);
	cout << test.add(1, 2, 3) << endl;
	cout << calculate(10, 20, 30) << endl;

	//cout << run(calculate) << endl;

	cin.get();
	return 0;
}