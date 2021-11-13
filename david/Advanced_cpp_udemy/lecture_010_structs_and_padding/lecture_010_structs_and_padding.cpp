#include <iostream>

using namespace std;

//without using pragma, sizeof(Person) will use padding of extra bytes. when using pragma, sizeof(Person) will be excatly the sum of bytes of all the fields that are inside the Person struct
#pragma pack(push, 1)

struct Person {
	char c;			// 1 byte
	char name[50];	// 50 bytes
	int age;		// 4 bytes
	double weight;	// 8 bytes
	//all together 63 bytes (without padding)
};

#pragma pack(pop) //this is the opposite of #pragma pack(push, 1). which means it is back to use padding. meaning, we cancelled the padding only for the struct Person. for the rest of the code, we do use padding (which is I guess more efficient).

int main() {
	cout << sizeof(Person) << endl;

	return 0;
}