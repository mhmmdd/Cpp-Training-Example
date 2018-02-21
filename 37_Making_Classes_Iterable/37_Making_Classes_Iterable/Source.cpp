#include <iostream>
#include <string>
#include "Ring.h"

using namespace std;

int main() {

	Ring<string> textString(3);

	textString.add("one");
	textString.add("two");
	textString.add("three");

	// C++ 98 style
	for (Ring<string>::iterator it = textString.begin(); it != textString.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;

	// C++ 11 style
	for (auto value : textString) {
		cout << value << endl;
	}


	cin.get();
	return 0;
}