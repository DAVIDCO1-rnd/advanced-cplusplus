#include <iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		//contructors don't return a value.
		//Therefore, without exceptions mechanism, we can't return a value that indicates that the allocation falied because we tried to allocate too much memory
		char* pMemory = new char[9999999999999999];
		delete[] pMemory;
	}
};

int main() {
	try {
		CanGoWrong wrong;
	}
	catch(bad_alloc &e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "Still running" << endl;

	return 0;
}