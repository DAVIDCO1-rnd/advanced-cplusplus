#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<double> numbers(0);

	cout << "Size: " << numbers.size() << endl;

	size_t capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;

	for (int i = 0; i < 1000; i++) {
		size_t capacity1 = numbers.capacity();
		if (capacity1 != capacity) {
			capacity = capacity1;
			cout << "Capacity: " << capacity << endl;
		}

		numbers.push_back(i+1);
	}

	return 0;
}