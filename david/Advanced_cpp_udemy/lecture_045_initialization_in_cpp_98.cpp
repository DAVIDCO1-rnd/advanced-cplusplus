#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int values[] = { 1, 4, 5 };

    cout << values[0] << endl;

    class C {
    public:
        string text;
        int id;
    };

    C c1 = { "Hello", 7 };

    cout << "class info: " << "c1.text = " << c1.text << ", c1.id = " << c1.id << endl;

    struct R {
        string text;
        int id;
    } r1 = { "Hello", 7 }, r2 = { "Hi", 9 };



    cout << "struct info: " << "r1.text = " << r1.text << ", r1.id = " << r1.id << endl;
    cout << "struct info: " << "r2.text = " << r2.text << ", r2.id = " << r2.id << endl;

    vector<string> strings;

    strings.push_back("One");
    strings.push_back("Two");
    strings.push_back("Three");

    return 0;
}

