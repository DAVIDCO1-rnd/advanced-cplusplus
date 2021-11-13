#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//without using pragma, sizeof(Person) will use padding of extra bytes. when using pragma, sizeof(Person) will be excatly the sum of bytes of all the fields that are inside the Person struct
#pragma pack(push, 1)

struct Person {
	char name[50];	// 50 bytes
	int age;		// 4 bytes
	double height;	// 8 bytes
	//all together 62 bytes (without padding)
};

#pragma pack(pop) //this is the opposite of #pragma pack(push, 1). which means it is back to use padding. meaning, we cancelled the padding only for the struct Person. for the rest of the code, we do use padding (which is I guess more efficient).

void writeBinaryFile(string filename, Person someone) {

	char* someoneAddress = (char*)&someone;
	char* someoneAddress_reinterpret_cast = reinterpret_cast<char*>(&someone);

	//ofstream outputfile;
	////binary files don't have new lines characters in it. we don't want it to interpret new line character in any way
	//outputfile.open(filename, ios::binary);

	fstream outputfile;
	//binary files don't have new lines characters in it. we don't want it to interpret new line character in any way
	outputfile.open(filename, ios::binary | ios::out);

	if (outputfile.is_open()) {
		outputfile.write(someoneAddress_reinterpret_cast, sizeof(Person));

		outputfile.close();
	}
	else {
		cout << "Could not create file " + filename << endl;
	}
}

Person readBinaryFile(string filename) {
	Person data = {};
	char* dataAddress_reinterpret_cast = reinterpret_cast<char*>(&data);
	fstream inputfile;
	//binary files don't have new lines characters in it. we don't want it to interpret new line character in any way
	inputfile.open(filename, ios::binary | ios::in);

	if (inputfile.is_open()) {
		inputfile.read(dataAddress_reinterpret_cast, sizeof(Person));

		inputfile.close();
	}
	else {
		cout << "Could not create file " + filename << endl;
	}
	
	return data;
}

void print_data(Person data) {
	cout << "data.name = " << data.name << endl;
	cout << "data.age = " << data.age << endl;
	cout << "data.height = " << data.height << endl;
	cout << "\n" << endl;
}

int main() {
	Person someone = { "David", 18, 1.75 };
	//bin file is not text. it's raw data
	string filenameExtension = "bin"; //doesn't need to be bin. it can be anything
	string filenameWithoutExtension = "test";
	string filename = filenameWithoutExtension + "." + filenameExtension;



	writeBinaryFile(filename, someone);
	Person someoneElse = readBinaryFile(filename);

	print_data(someoneElse);

	return 0;
}