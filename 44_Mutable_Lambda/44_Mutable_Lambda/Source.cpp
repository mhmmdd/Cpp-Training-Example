#include <iostream>
#include <string>
using namespace std;

int main() {
	int cats = 5;

	[cats]() mutable {
		cats = 8;
		cout << cats << endl;
	}();

	cout << cats << endl;

	cin.get();
	return 0;
}