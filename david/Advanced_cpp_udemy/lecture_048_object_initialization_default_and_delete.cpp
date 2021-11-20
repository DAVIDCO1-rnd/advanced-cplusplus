#include <iostream>

using namespace std;

class Test {
    int id{ 3 };
    string name{ "Mike" };

public:
    Test() = default;
    Test(const Test& other) = default;
    Test& operator=(const Test& other) = default;

    Test(int id) : id(id) {

    }

    void print() {
        cout << id << ": " << name << endl;
    }
};

class Test_delete {
    int id{ 3 };
    string name{ "Mike" };

public:
    Test_delete() = default;
    Test_delete(const Test_delete& other) = delete;
    Test_delete& operator=(const Test_delete& other) = delete;

    Test_delete(int id) : id(id) {

    }

    void print() {
        cout << id << ": " << name << endl;
    }
};

int main()
{
    Test test;
    test.print();

    Test test1(77);
    test1.print();

    Test test2 = test1;
    test2 = test;

    Test_delete test_d;
    test_d.print();

    Test_delete test_d1(77);
    test_d1.print();

    //Test_delete test_d2 = test_d1; //will not compile because of this line: Test_delete(const Test_delete& other) = delete;
    //test_d2 = test_d; //will not compile because of this line: Test_delete& operator=(const Test_delete& other) = delete;

    return 0;
}

