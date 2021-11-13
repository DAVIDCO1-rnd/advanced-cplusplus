#include <iostream>
#include <typeinfo>

using namespace std;

// I didn't really listen to this lecture

int main()
{
	string value;

	decltype(value) name = "Bob";

	cout << typeid(value).name() << endl;

	//cout << name << endl;

	return 0;
}


