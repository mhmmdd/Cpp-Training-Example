#include <iostream>

class Log {
public:
	const int logLevelError = 0;
	const int logLevelWarning = 1;
	const int logLevelInfo = 2;

private:
	int logLevel = logLevelError;

public:
	void setLogLevel(int level) {
		this->logLevel = level;
	}


	void error(const char* message) {
		if(logLevel >= logLevelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}

	void info(const char* message) {
		if (logLevel >= logLevelInfo) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

	void warn(const char* message) {
		if (logLevel >= logLevelWarning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}
};


int main() {

	Log log; 
	log.setLogLevel(log.logLevelWarning);

	log.warn("Hello!");


	int max = 90;

	// Ýçerik deðiþtirilemez
	//const int* a = new int;
	//*a = 2;

	// Adres deðiþtirilemez
	int *const a = new int;
	*a = 2;
	//a = (int*) &max;
	*a = 4;


	std::cout << *a << std::endl;

	std::cin.get();
}