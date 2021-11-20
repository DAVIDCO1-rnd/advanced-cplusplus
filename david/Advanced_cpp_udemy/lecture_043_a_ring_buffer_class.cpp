#include <iostream>
#include "ring043.h"

using namespace std;

int main()
{
    ring<string> cyclic_text(3);

    //cout << typeid(textring) << endl;

    cyclic_text.add("one");
    cyclic_text.add("two");
    cyclic_text.add("three");
    cyclic_text.add("four");

    for (int i = 0; i < cyclic_text.size(); i++) {
        cout << cyclic_text.get(i) << endl;
    }

    return 0;
}

