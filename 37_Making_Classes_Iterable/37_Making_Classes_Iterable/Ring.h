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

	iterator begin() {
		return iterator(0, *this);
	}

	iterator end() {
		return iterator(mSize, *this);
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
private:
	int mPos;
	Ring &mRing;

public:
	iterator(int pos, Ring &ring) 
		: mPos(pos), mRing(ring) {
	}

	iterator &operator++(int) {
		mPos++;
		return *this;
	}

	iterator &operator++() {
		mPos++;
		return *this;
	}

	T &operator*() {
		return mRing.get(mPos);
	}

	bool operator!=(const iterator &other) const {
		return mPos != other.mPos;
	}
};


#endif