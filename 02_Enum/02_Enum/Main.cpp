#include <iostream>
#include <string>

using namespace std;

enum Example: char {
	A = 5,
	B,
	C
};

enum dayOfWeek {
	M=1, TU, W, TH, F, SA, SN
};

string getDay(dayOfWeek d) {
	switch (d) {
		case M:
			return "Monday";
		case TU:
			return "Tuesday";
		case W:
			return "Wednesday";
		case TH:
			return "Thursday";
		case F:
			return "Friday";
		case SA:
			return "Saturday";
		case SN:
			return "Sunday";
		default:
			return "You typed something wrong!";
	}
}

int main() {

	dayOfWeek d = TH;

	cout << d << endl;

	cout << dayOfWeek(F) << endl;
	cout << dayOfWeek(SA) << endl;
	cout << dayOfWeek(SN) << endl;
	cout << endl;


	int i;
	cout << "Enter the day of a week " << endl;
	cout << "1. Monday " << endl;
	cout << "2. Tuesday" << endl;
	cout << "3. Wednesday " << endl;
	cout << "4. Thursday " << endl;
	cout << "5. Friday " << endl;
	cout << "6. Saturday " << endl;
	cout << "7. Sunday " << endl;
	cin >> i;
	cout << getDay(dayOfWeek(i)) << endl;

	system("pause");
	return 0;
}