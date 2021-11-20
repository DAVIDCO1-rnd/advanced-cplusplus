#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	//ifstream inFile;
	//string inputFileName = "text.txt";
	//inFile.open(inputFileName);

	fstream inFile;
	string inputFileFullPath = "../lecture_007_writing_text_files/text.txt";
	inFile.open(inputFileFullPath, ios::in);

	if (inFile.is_open()) {
		string line;
		while (inFile.eof() == false) {
			//inFile >> line;
			getline(inFile, line);
			cout << line << endl;			
		}
		inFile.close();
	}
	else {
		cout << "Could not open file: " << inputFileFullPath << endl;
	}

	return 0;
}