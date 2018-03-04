#include <iostream>
#include <string>

using namespace std;

int main() {

	int var = 5;
	int a = 20;

	cout << *&var << endl;

	int * const p = &var;
	cout << *p << endl;

	*p = 60; // Change var

	cout << "var: " << var << endl;
	cout << "*p: " << *p << endl;
	cout << "a: " << a << endl;

	// 1. Cannot change address
	int * const p_const = &a;

	// error
	//p_const = &var; 

	*p_const = 25;
	cout << "a: " << a << endl;

	// Important!
	// value constant	=> int const * p4 = &a;
	// address constant	=> int * const p4 = &a;

	// 2. Cannot change value
	const int *p_2 = &a;
	p_2 = &var;


	// 3. Cannot change value and address
	const int * const p_3 = &a;

	// error
	//*p_3 = 3;
	//p_3 = &var;

	system("pause");
	return 0;
}