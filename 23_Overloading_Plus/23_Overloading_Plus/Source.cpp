#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;
using namespace exampleComplex;

int main() {

	Complex c1(3, 4);
	Complex c2(2, 3);

	Complex c3 = c1 + c2;

	cout << c1 << endl;

	cout << c1 + c2 + c3 << endl;

	Complex c4(4, 2);
	Complex c5 = c4 + 7;

	cout << c5 << endl;

	Complex c6(1, 7);
	cout << 5 + c6 << endl;


	cin.get();
	return 0;
}