
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	string outFileName = "text.txt";
	//ofstream outFile;

	fstream outFile;
	outFile.open(outFileName, ios::out);

	//outFile.open(outFileName);

	if (outFile.is_open()) {
		outFile << "Hello there" << endl;
		outFile << 123 << endl;
		outFile.close();
	}
	else {
		cout << "Could not create file: " << outFileName << endl;
	}

	return 0;
}