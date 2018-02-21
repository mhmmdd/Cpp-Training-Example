
#include <iostream>

class Entity {

public:
	float x, y;

	void move(float xa, float ya) {
		x += xa;
		y += ya;
	}

};

class Player : public Entity {
public: 
	const char * name;

	void printName() {
		std::cout << name << std::endl;
	}
};


int main() {


	std::cout << sizeof(Player) << std::endl;

	Player player;

	player.x = 5;
	player.move(2, 3);

	std::cout << player.x << std::endl;

	//player.printName();


	std::cin.get();

	return 0;
}