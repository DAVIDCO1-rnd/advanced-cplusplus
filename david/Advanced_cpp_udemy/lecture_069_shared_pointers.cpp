#include <iostream>
#include <vector>
#include <memory> //must be used with smart pointers. iostream already includes <memory> so it might work anyway

using namespace std;

class Test {
public:
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "hello" << endl;
	}

	~Test() {
		cout << "Destroyed" << endl;
	}
};

int main() {
	shared_ptr<Test> pTest2(nullptr);

	{
		//shared_ptr<Test> pTest1(new Test());
		shared_ptr<Test> pTest1 = make_shared<Test>();
		pTest2 = pTest1;
	}
	

	cout << "finished" << endl;

	return 0;
}