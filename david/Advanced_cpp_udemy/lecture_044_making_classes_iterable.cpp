#include <iostream>
#include "ring044.h"

using namespace std;

int main()
{
    ring<string> textring(3);

    //cout << typeid(textring) << endl;

    textring.add("one");
    textring.add("two");
    textring.add("three");

    ring<string>::iterator it_begin = textring.begin();
    ring<string>::iterator it_end = textring.end();

    //C++ 98 style
    cout << "C++ 98 style" << endl;
    for (ring<string>::iterator it = it_begin; it != it_end; it++) {
        string it_val = *it;
        cout << it_val << endl;
    }

    cout << endl;

    //C++ 11 style
    cout << "C++ 11 style" << endl;
    for (auto value : textring) {
        cout << value << endl;
    }

    return 0;
}

