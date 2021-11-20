#include <iostream>
using namespace std;

void usesMightGoWrong();
void mightGoWrong();

void usesMightGoWrong()
{
    mightGoWrong();
}

void mightGoWrong() {
    bool error1 = false;
    bool error2 = true;

    if (error1) {
        //as soon ass the 'throw' command occurres, the function stops executing
        throw "Something went wrong"; //throws all the way up till try{}catch{}
    }

    if (error2) {
        throw new string("something else went wrong");
    }
}

int main()
{
    try {
        usesMightGoWrong();
        //int denominator = 0;
        //int var = 7 / denominator;
    }
    catch (int e)
    {
        cout << "Error code: " << e << endl;
    }
    catch (char const* e) {
        cout << "Error message: " << e << endl;
    }
    //catch (string e) {
    //    cout << "String error message: " << e << endl;
    //}

    cout << "Still running" << endl;

    return 0;
}


