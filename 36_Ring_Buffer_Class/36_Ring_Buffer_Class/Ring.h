#ifndef RING_H_
#define RING_H_
#include <iostream>
using namespace std;

template<class T>
class Ring
{
private:
	int mPos;
	int mSize;
	T * mValues;

public:
	class iterator;

public:
	Ring(int size) : mPos(0), mSize(size), mValues(NULL) {
		mValues = new T[size];
	}

	~Ring() {
		delete[] mValues;
	}

	int size() {
		return mSize;
	}

	void add(T value) {
		mValues[mPos++] = value;

		if (mPos == mSize) {
			mPos = 0;
		}
	}

	T &get(int pos) {
		return mValues[pos];
	}
};

template<class T>
class Ring<T>::iterator {
public:
	void print() {
		cout << "Hello from iterator: " << T() << endl;
	}
};


#endif