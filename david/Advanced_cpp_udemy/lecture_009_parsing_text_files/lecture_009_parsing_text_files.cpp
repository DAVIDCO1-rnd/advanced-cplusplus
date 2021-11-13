#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string filename = "stats.txt";
	ifstream input;

	input.open(filename);

	if (input.is_open() == false) {
		return 1;
	}

	//identical to while (input.eof()) - didn't really understand why
	while (input) {
		string line;

		getline(input, line, ':');

		//if (line.size() == 0) {
		//	continue;
		//}

		int population;
		input >> population;

		input.get();

		cout << "'" << line << "'" << " --  '" << population << "'" << endl;
	}

	input.close();

	return 0;
}
