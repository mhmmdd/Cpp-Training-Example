#include <iostream>
#include <string>
using namespace std;

void test(void (*pFunc)()) {
	pFunc();
}


void testGreet(void(*pFunc)(string name)) {
	pFunc("Bob");
}


void runDivide(double (*divide)(double a, double b)) {
	cout << divide(9, 3) << endl;
}

int main() {


	auto func = []() {
		cout << "Hello" << endl;
	};
	func();

	test(func);
	test([]() {cout << "Hello" << endl; });

	cout << endl;


	auto pGreet = [](string name) {
		cout << "Hello " << name << endl;
	};

	pGreet("Muhammed");

	testGreet(pGreet);

	auto pDivide = [](double a, double b) -> double {
		if (b == 0) {
			return 0;
		}

		return a / b;
	};

	cout << pDivide(10.0, 5.0) << endl;
	cout << pDivide(10.0, 0) << endl;


	runDivide(pDivide);
	cout << endl << endl;


	cin.get();
	return 0;
}