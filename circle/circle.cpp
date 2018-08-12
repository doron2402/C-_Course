#include <iostream>


using namespace std;

int main()
{
    float radius, area;
    const double PI = 3.1415;
    cout << "Enter the circle radius!" << endl;
    cin >> radius;
    area = radius * radius * PI;
    cout << "Area: " <<  area << endl;

    return 0;
}