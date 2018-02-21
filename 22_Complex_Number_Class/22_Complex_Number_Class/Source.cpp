#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;
using namespace exampleComplex;

int main() {
	Complex c1(2, 3);

	Complex c2 = c1;

	Complex c3 = c2;

	cout << c2 << ": " << c3 << endl;


	cin.get();
	return 0;
}