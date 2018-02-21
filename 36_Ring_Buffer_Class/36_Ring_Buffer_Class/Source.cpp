#include <iostream>
#include <string>
#include "Ring.h"

using namespace std;

int main() {

	Ring<string> textString(3);

	textString.add("one");
	textString.add("two");
	textString.add("three");
	textString.add("four");
	textString.add("five");

	for (int i = 0; i < textString.size(); i++) {
		cout << textString.get(i) << endl;
	}


	cin.get();
	return 0;
}