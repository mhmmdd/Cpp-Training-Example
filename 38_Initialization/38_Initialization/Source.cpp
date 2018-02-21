#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	/*
	* C++ 98 style
	*/
	cout << "C++ 98 style" << endl;

	int values[] = { 1, 2, 3, 4 };
	cout << values[0] << endl;


	class C {
	public: 
		string text;
		int id;
	};

	C c1 = { "Hello", 7 };
	cout << c1.text << endl;


	struct S {
		string text;
		int id;
	};

	S s1 = { "Hello", 7 };
	cout << s1.text << endl;


	struct {
		string text;
		int id;
	} r1 = { "Hello", 7 }, r2 = { "Hi", 9 };
	
	cout << r1.text << endl;
	cout << r2.text << endl;


	vector<string> strings;
	strings.push_back("One");
	strings.push_back("Two");
	strings.push_back("Three");
	strings.push_back("Four");

	cout << endl << endl;



	/*
	* C++ 11 style
	*/
	cout << "C++ 11 style" << endl;

	int value{ 5 };
	cout << value << endl;

	string text{ "Hello" };
	cout << text << endl;

	int numbers[]{ 1, 2, 3, 4 };
	cout << numbers[1] << endl;

	int *pInts = new int[3] {1, 2, 3};
	cout << pInts[1] << endl;
	delete pInts;

	int value1{};
	cout << value1 << endl;

	int *pSomething{&value};
	cout << *pSomething << endl;

	int *pNull{ }; // equivalent to int *pNull = nullptr;
	cout << pNull << endl;

	int numbers1[5]{};
	cout << numbers1[1] << endl;

	struct {
		int value;
		string text;

	} s3 = { 5, "Hi" };

	cout << s3.text << endl;


	vector<string> strings2{ "one", "two", "three" };
	cout << strings[2] << endl;

	cin.get();
	return 0;
}