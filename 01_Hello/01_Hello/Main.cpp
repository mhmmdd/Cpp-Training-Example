#include <iostream>

#define LOG(x) std::cout << x << std::endl;


void logMessage(const char *message) {
	std::cout << message << std::endl;
}

void increment(int *value) {
	(*value)++;
}

void refIncrement(int &value) {
	value++;
}

int main() {
	
	logMessage("Hello world!");

	bool a = true;

	//logMessage(a);

	std::cout << a << std::endl;

	std::cout << sizeof(bool) << std::endl;

	// pointer
	int b = 8;
	int *p = &b;
	int c = 0;


	// reference
	int aa = 4; 
	int &refaa = aa;

	refaa = 2;
	LOG(aa);

	int a2 = 3;
	increment(&a2);
	LOG(a2);

	int a3 = 4;
	refIncrement(a3);
	LOG(a3);

	std::cin.get();
}