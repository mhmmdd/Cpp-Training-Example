
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	string inFileName = "text.txt";
	ifstream input;
	 
	input.open(inFileName);

	if (!input.is_open()) {
		return 1;
	}

	while(input) {
		//if (input.eof()) break;
		string line;

		getline(input, line, ':');

		int population;
		input >> population;

		//input.get();
		input >> ws;

		if (!input) {
			break;
		}

		cout << "'" << line << "'" << " -- '" << population << "'" << endl;
	}

	input.close();


	cin.get();
	return 0;
}