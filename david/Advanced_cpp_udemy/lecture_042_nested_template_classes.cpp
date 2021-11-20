#include <iostream>
#include "ring_template.h"
#include "ring.h"

using namespace std;

int main()
{
	ring_template<int>::iterator it;
	it.print();

	//auto texts = { "one", "two", "three" };
	//cout << "typeid(texts).name() = " << typeid(texts).name() << endl;

	//list<string> texts_list = { "one", "two", "three" };
	//cout << "typeid(texts_list).name() = " << typeid(texts_list).name() << endl;

	//vector<string> texts_vector = { "one", "two", "three" };
	//cout << "typeid(texts_vector).name() = " << typeid(texts_vector).name() << endl;

	//for (auto text : texts) {
	//	cout << text << endl;
	//}
	//cout << endl;

	//vector<int> numbers;
	//numbers.push_back(5);
	//numbers.push_back(7);
	//numbers.push_back(9);
	//numbers.push_back(11);

	//for (auto number : numbers) {
	//	cout << number << endl;
	//}

	//string hello = "Hello";

	//for (auto c : hello) {
	//	cout << c << endl;
	//}

	return 0;
}

