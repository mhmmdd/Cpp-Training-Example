#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << endl;
	}

	//strings[3] = "dog";
	//cout << strings[3] << endl;
	//cout << strings.size() << endl;

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;
	}
	
	
	cin.get();
	return 0;
}