#include <iostream>
#include <typeinfo>

using namespace std;

// I didn't really listen to this lecture

int main()
{
	auto x = 4;
	auto y = 3.37;
	auto ptr = &x;
	string str = "david";
	cout << "typeid(x).name() =\t" << typeid(x).name() << endl
		<< "typeid(y).name() =\t" << typeid(y).name() << endl
		<< "typeid(ptr).name() =\t" << typeid(ptr).name() << endl
		<< "typeid(str).name() =\t" << typeid(str).name() << endl;
	cout << endl;


	string value;

	decltype(value) name = "Bob";

	cout << typeid(value).name() << endl;

	//cout << name << endl;

	return 0;
}


