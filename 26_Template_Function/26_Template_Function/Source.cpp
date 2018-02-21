#include <iostream>
#include <string>
using namespace std;


template<class T>
void print(T n) {
	cout << "Template version: " << n << endl;
}

void print(int value) {
	cout << "Template version: " << value << endl;
}

template<class T>
void show() {
	cout << T() << endl;
}

int main() {
	print<string>("Hello");
	print<int>(5);

	print("Hi there");

	show<double>();

	cin.get();
	return 0;
}