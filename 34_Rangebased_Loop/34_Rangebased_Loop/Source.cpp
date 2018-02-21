#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	auto texts = { "one", "two", "three" };

	for(auto text: texts) {
		cout << text << endl;
	}
	cout << endl;


	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(4);
	numbers.push_back(51);
	numbers.push_back(11);
	
	for (auto number : numbers) {
		cout << number << endl;
	}
	cout << endl;


	string hello = "Hello";

	for (auto c : hello) {
		cout << c << endl;
	}

	cout << endl;

	for (char c : hello) {
		cout << c << endl;
	}

	cin.get();
	return 0;
}