#include <iostream>
#include <vector>
#include <memory.h>
#include <string>
using namespace std;

class Test {
private:
	static const int SIZE = 100;
	int *_pBuffer;

public:
	Test() {
		cout << "constructor" << endl;
		_pBuffer = new int[SIZE] {};
		//memset(_pBuffer, 0, sizeof(int)*SIZE);
	}

	Test(int i) {
		cout << "parameterized constructor" << endl;
		_pBuffer = new int[SIZE] {};

		for (int i = 0; i < SIZE; i++) {
			_pBuffer[i] = 7 * i;
		}
	}

	Test(const Test &other) {
		cout << "copy constructor" << endl;
		_pBuffer = new int[SIZE] {};
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
	}

	Test &operator=(const Test &other) {
		cout << "assignment" << endl;

		_pBuffer = new int[SIZE] {};
		memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
		return *this;
	}

	~Test() {
		cout << "destructor" << endl;
		delete[] _pBuffer;
	}

	friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}

Test getTest() {
	return Test();
}

void check(const Test &value) {
	cout << "lValue function!" << endl;
}

void check(Test &&value) {
	cout << "rValue function!" << endl;
}

int main() {
	Test test1 = getTest();

	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());


	int value1 = 7;
	int *pValue = &value1;

	Test *pTest1 = &test1;
	Test *pTest2 = &getTest();

	int *pValue3 = &++value1;
	cout << *pValue3 << endl;

	// Error
	//int *pValue3 = &value1++;

	//int *s = &(7 + value1);

	Test &rTest1 = test1;
	//Test &rTest2 = getTest();
	const Test &rTest2 = getTest();

	Test test2(Test(1));

	Test &lTest1 = test1;
	Test &&rTest3 = getTest();

	cout << endl << endl;
	check(test1);
	check(getTest());
	check(Test());

	cin.get();
	return 0;
}