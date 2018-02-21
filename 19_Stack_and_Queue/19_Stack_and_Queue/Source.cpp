#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

class Test {
private:
	string name;

public:
	Test(string name) : name(name) {

	}

	~Test(){
		cout << "Object destroyed" << endl;
	}

	void print() const {
		cout << name << endl;
	}
};

int main() {

	/*
	 * Stack
	*/
	// LIFO
	// Bardak gibi
	stack<Test> testStack;
	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));

	cout << endl;

	/*
	 * This is invalid code! Object is destroyed.
	Test &test1 = testStack.top();
	cout << endl;
	test1.print();
	*/

	while (testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}
	

	/*
	testStack.pop();
	Test test2 = testStack.top();
	test2.print();
	*/
	

	/*
	* Queue
	*/
	// FIFO
	// Otobüs kuyruğu
	queue<Test> testQueue;
	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	cout << endl;

	while (testQueue.size() > 0) {
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	cin.get();
	return 0;
}