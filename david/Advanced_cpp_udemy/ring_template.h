#ifndef RING_TEMPLATE_H_
#define RING_TEMPLATE_H_

#include <iostream>
using namespace std;

template<class T>
class ring_template {
public:
	class iterator;
};

template<class T>
class ring_template<T>::iterator {
public:
	void print() {
		cout << "Hello from iterator" << T() << endl;
	}
};

#endif /* RING_TEMPLATE_H_ */