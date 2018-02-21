#include <iostream>
#include <string>


class Entity {
public:
	virtual std::string getName() {
		return "Entity";
	}
};

class Player : public Entity {
private:
	std::string mName;
public:
	Player(const std::string &name) : mName(name) {

	}

	std::string getName() override {
		return mName;
	}
};


void printName(Entity *e) {
	std::cout << e->getName() << std::endl;
}

int main() {

	Entity *e = new Entity();
	printName(e);

	Player *p = new Player("Cherno");
	printName(p);

	std::cin.get();

	return 0;
}