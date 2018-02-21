
#include <iostream>
#include <string>
using namespace std;

// Custom Exception
class MyException : public exception {
public: 
	virtual const char* what() const throw() {
		return "Something bad happened";
	}
};
class Test {
public:
	void goesWrong() {
		throw MyException(); 
	}
};


class CanGoWrong {
public:
	CanGoWrong() {
		char *pMemory = new char[9999];
		delete[] pMemory;
	}
};


void mightGoWrong() {
	bool error = false;
	bool error2 = true;
	bool error3 = true;

	if (error) {
		throw 8;
	}
	if (error2) {
		throw "Something went wrong.";
	}

	if (error3) {
		throw string("Something went wrong.");
	}

}

int main() {

	Test test;
	try {
		test.goesWrong();
	}
	catch (MyException e) {
		cout << e.what() << endl;
	}



	try {
		CanGoWrong wrong;
	}
	catch (bad_alloc &e) {
		cout << e.what() << endl;
	}
	

	try {
		mightGoWrong();
	}
	catch (int e) {
		cout << "Error code: " << e << endl;
	}
	catch (char const *e) {
		cout << "Error code: " << e << endl;
	}
	catch (string &e) {
		cout << "Error code: " << e << endl;
	}

	cout << "Still running" << endl;

	return 0;
}