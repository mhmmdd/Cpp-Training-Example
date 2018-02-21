#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#pragma pack(push, 1)

struct Person {
	char name[50];
	int age;
	double weight;
};

#pragma pack(pop)

int main() {

	Person someone = {
		"Frodo", 
		220,
		0.8
	};

	string fileName = "test.bin";



	//// Write binary file ///////////////////

	ofstream outputFile;
	outputFile.open(fileName, ios::binary);

	if (outputFile.is_open()) {

		outputFile.write((char *)&someone, sizeof(Person));

		outputFile.close();
	}
	else {
		cout << "Could not create file " + fileName;
	}

	

	//// Read binary file ///////////////////

	Person someoneElse = {};

	ifstream inputFile;
	inputFile.open(fileName, ios::binary);

	if (inputFile.is_open()) {
		inputFile.read((char *)&someoneElse, sizeof(Person));

		inputFile.close();
	}
	else {
		cout << "Could not read file " + fileName;
	}
	
	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.weight << endl;

	cin.get();
	return 0;
}