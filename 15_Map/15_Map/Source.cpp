#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	cout << ages["Mike"] << endl;


	//pair<string, int> newAge("Peter", 100);
	//ages.insert(newAge);

	ages.insert(pair<string, int>("Peter", 100));
	ages.insert(make_pair("Peter2", 200));


	if (ages.find("Vicky") != ages.end()) {
		cout << "Found Vicky" << endl;
	}
	else {
		cout << "Key not found" << endl;
	}
	cout << endl;

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;
		cout << age.first << ": " << age.second << endl;
	}
	cout << endl;

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}


	cin.get();
	return 0;
}