#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> strings;
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	vector<string>::iterator first_iterator = strings.begin();
	vector<string>::iterator last_iterator = strings.end();

	for (vector<string>::iterator it = first_iterator; it != last_iterator; it++)
	{
		std::cout << *it << std::endl;
	}

	getchar();
	return 0;
}