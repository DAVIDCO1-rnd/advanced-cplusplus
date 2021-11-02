// lecture_005_custom_exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception {
public:
    //const throw() means that this method won't throw an exception
    virtual const char* what() const throw() {
        return "Something bad happened!";
    }
};

class Test {
public:
    void goesWrong() {
        throw MyException();
    }
};

int main()
{
    Test test;

    try {
        test.goesWrong();
    }
    catch (MyException &e) {
        cout << e.what() << endl;
    }
}

