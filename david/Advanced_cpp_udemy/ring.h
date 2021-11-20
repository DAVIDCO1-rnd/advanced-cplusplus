#ifndef RING_H_
#define RING_H_

#include <iostream>
using namespace std;

class ring {
public:
	class iterator;
};

class ring::iterator {
public:
	void print() {
		cout << "Hello from iterator" << endl;
	}
};

#endif /* RING_H_ */