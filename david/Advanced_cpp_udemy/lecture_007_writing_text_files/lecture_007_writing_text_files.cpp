#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	//ofstream outFile;
	//string outputFileName = "text.txt";
	//outFile.open(outputFileName);

	fstream outFile;
	string outputFileName = "text.txt";
	outFile.open(outputFileName, ios::out);

	if (outFile.is_open()) {
		outFile << "Hello there" << endl;
		outFile << "1236" << endl;
		outFile.close();
	}
	else {
		cout << "Could not create file: " << outputFileName << endl;
	}

	return 0;
}