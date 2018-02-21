#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;
using namespace exampleComplex;

int main() {

	Complex c1(3, 4);
	Complex c2(3, 43);

	if (c1 == c2) {
		cout << "Equals" << endl;
	}
	else {
		cout << "Not equal" << endl;
	}

	if (c1 != c2) {
		cout << "Not equal" << endl;
	}
	else {
		cout << "Equals" << endl;
	}

	cin.get();
	return 0;
}