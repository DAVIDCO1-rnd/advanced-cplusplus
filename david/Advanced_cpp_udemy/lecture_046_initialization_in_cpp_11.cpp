#include <iostream>
#include <vector>

using namespace std;

void printCppVersion() {
    if (__cplusplus == 201703L)
        std::cout << "C++17\n";
    else if (__cplusplus == 201402L)
        std::cout << "C++14\n";
    else if (__cplusplus == 201103L)
        std::cout << "C++11\n";
    else if (__cplusplus == 199711L)
        std::cout << "C++98\n";
    else
        std::cout << "pre-standard C++\n";

    std::cout << endl;
}

int main()
{
    printCppVersion();

    int value{ 5 };
    cout << value << endl;

    string text{ "Hello" };
    cout << text << endl;

    int numbers[]{ 1, 2, 4 };
    cout << numbers[1] << endl;

    int* pInts = new int[3]{ 1, 2, 3 };
    cout << pInts[1] << endl;
    delete pInts;  //does it delete a single element or the whole array?

    int value1{};
    cout << value1 << endl;

    int* pSomething{}; //equivalent to int *pSomething = nullptr;
    //cout << *pSomething << endl;

    int numbers1[5]{};
    cout << numbers1[1] << endl;

    struct {
        int value;
        string text;
    } s1{ 5, "Hi" };

    cout << "struct info: " << "s1.value = " << s1.value << ", s1.text = " << s1.text << endl;

    vector<string> strings{ "one", "two", "three" };

    cout << strings[2] << endl;

    return 0;
}

