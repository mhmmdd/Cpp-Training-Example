

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector <double> numbers(0);
	cout << "Size: " << numbers.size() << endl;

	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;

	for (int i = 0; i < 10000; i++) {
		if(numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}

		numbers.push_back(i);
	}

	numbers.clear();
	cout << "Size: " << numbers.size() << endl;
	// Capacity doesn't change
	cout << "Capacity: " << numbers.capacity() << endl;


	numbers.resize(30);
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	cin.get();
	return 0;
}