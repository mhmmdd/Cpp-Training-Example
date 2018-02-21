#include <iostream>
#include <string>
using namespace std;

void test() {
	cout << "Hello" << endl;
}

void test(int value) {
	cout << "Hello" << value << endl;
}


int main() {
	test();

	void(*pTest)() = test;
	void(*pTest2)(int) = test;

	pTest();
	pTest2(2);

	cin.get();
	return 0;
}