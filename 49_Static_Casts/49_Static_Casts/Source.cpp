#include <iostream>
#include <string>
using namespace std;


class Parent {
public:
	void speak() {
		cout << "parent" << endl;
	}
};

class Brother : public Parent {

};

class Sister : public Parent {

};

int main() {

	Parent parent;
	Brother brother;


	float value = 3.23;

	cout << (int)value << endl;
	cout << int(value) << endl;

	cout << static_cast<int>(value) << endl;


	Parent *pp = &brother;
	Brother *pb = static_cast<Brother *>(&parent);

	Brother *ppb = &brother;
	Brother *pbb = static_cast<Brother *>(ppb);

	cout << pbb << endl;

	Parent &&p = static_cast<Parent &&>(parent);
	p.speak();


	cin.get();
	return 0;
}