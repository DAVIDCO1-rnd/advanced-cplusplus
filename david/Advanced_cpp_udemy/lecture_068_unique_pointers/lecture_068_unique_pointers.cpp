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

void test_unique_ptr()
{
	vector<unique_ptr<int>> values;
	unique_ptr<int> val1(new int);
	*val1 = 7;

	unique_ptr<int> val2(new int);
	*val2 = 8;

	//values[0] and val1 both point to the same value (values[0] and val1 are located in different addresses).
	//Therefore they cannot be both unique_ptr
	values.push_back(std::move(val1)); 

	{
		unique_ptr<Test> pTest(new Test);
		pTest->greet();
	}
	cout << "finished" << endl;
} //at this point the object Test the is pointed by pTest is destroyed (since pTest is the only pointer that points to it, it is safe to destroy the object).

class Temp {
private:
	//unique_ptr<int> pTest(new int);
	unique_ptr<Test[]> pTest;

public:
	Temp() : pTest(new Test[2]) {}
};

void test_regular_pointer()
{
	Test* pTest = new Test;
	pTest->greet();

	cout << "finished" << endl;
}

int main() {
	Temp temp;

	//test_unique_ptr();
	//test_regular_pointer();


	return 0;
}