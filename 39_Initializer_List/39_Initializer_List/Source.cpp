#include <iostream>
#include <vector>
#include <initializer_list>
#include <string>

using namespace std;

class Test {
public:
	Test(initializer_list<string> texts) {
		for (auto value : texts) {
			cout << value << endl;
		}
	}

	void print(initializer_list<string> texts) {
		for (auto value : texts) {
			cout << value << endl;
		}
	}
};

int main() {

	vector<int> members{ 1, 3, 4, 6 };
	cout << members[2] << endl;
	cout << endl;

	Test test{ "apple", "orange", "banana" };
	cout << endl;

	test.print({"one", "two", "three", "four"});

	cin.get();
	return 0;
}