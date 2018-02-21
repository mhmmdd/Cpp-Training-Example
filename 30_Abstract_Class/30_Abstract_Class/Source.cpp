#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	virtual void run() = 0;
	virtual void speak() = 0;
};

class Dog: public Animal {
public:
	virtual void speak() {
		cout << "Woof!" << endl;
	}
};

class Labrador: public Dog {
public:
	virtual void run() {
		cout << "Labrador running" << endl;
	}
};


int main() {

	Labrador lab;
	lab.run();
	lab.speak();

	Animal *animals[5];
	animals[0] = &lab;

	animals[0]->speak();

	cin.get();
	return 0;
}