#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    float radius, diameter, circumference, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    
    diameter = 2 * radius;
    circumference = 2 * M_PI * radius;
    area = M_PI * (radius * radius);

    cout << "Diameter of the circle = " << diameter << " units" << endl;
    cout << "Circumference of the circle = " << circumference << "units" << endl;
    cout << "Area of the circle = " << area << " sq. units" << endl;

    return 0;
}
