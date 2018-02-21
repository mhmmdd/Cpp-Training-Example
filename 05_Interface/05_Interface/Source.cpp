#include <iostream>
#include <string>


class Printable {
public:
	virtual std::string getClassName() = 0;
};

class Player : public Printable {
private:
	std::string mName;
public:
	Player(const std::string &name) : mName(name) {

	}

	std::string getClassName() override {
		return mName;
	}
};


void printName(Printable *p) {
	std::cout << p->getClassName() << std::endl;
}

int main() {

	Player *p = new Player("Cherno");
	printName(p);

	std::cin.get();

	return 0;
}