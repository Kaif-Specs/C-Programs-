#include <iostream>
#include <cmath>   // needed for pow()
using namespace std;

int main()
{
    const double PI = 3.14;  // CONST variable in capital
    double radius = 45;

    double AREA = PI * radius * radius;  // or use pow(radius, 2)
    cout << "The area of circle is " << AREA;

    return 0;
}



