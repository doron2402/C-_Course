#include <iostream>

using namespace std;

int main()
{
    bool a;
    char c;
    string name = "hello";
    int i;
    float f;
    double d;
    wchar_t wc;
    double PIE = 3.1415;
    // Boolean
    a = true;
    if (a == true) {
      cout << "a is true" << endl;
    }
    else {
      cout << "a is false" << endl;
    }

    cout << "Enter your name:" << endl;
    cin >> name;
    cout << "Nice to meet you, " << name << endl;

    unsigned int userAge;

    return 0;

};