#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {

	list<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(8);

	list<int>::iterator it = numbers.begin();
	it++;
	numbers.insert(it, 100);
	cout << "Inserted Element: 100 to " << *it << endl;

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}


	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	eraseIt = numbers.erase(eraseIt);
	cout << "Erased Element: " << *eraseIt << endl;

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;

	// Custom insertion
	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		if (*it == 2) {
			numbers.insert(it, 1234);
		}
	}


	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	cin.get();
	return 0;
}