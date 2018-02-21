#include <iostream>
#include <string>
using namespace std;

template <class T>
auto test(T value) -> decltype(value) {
	return value;
}

int get() {
	return 9;
}

auto test2() -> decltype(get()) {
	return get();
}

int main() {
	
	auto value = 7;
	auto text = "Hello";

	cout << value << endl;
	cout << text << endl;
	cout << endl;

	cout << test("Hello there") << endl;
	cout << endl;

	cout << test2() << endl;

	cin.get();
	return 0;
}
