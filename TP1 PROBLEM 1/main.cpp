//Richard Banahene Owusu
// student number: 19021316
// Program: vibot

// Question 1 - A function to compute the Area and Circumference of  sequence

#include <iostream>
#include <iostream>
#define PI 3.14159

using namespace std;

int main()
{
    float radius, area, circum;
    cout << "\nInput the radius(1/2 of diameter) of a circle:";
    cin >> radius;

    // Area of a circle=PI*radius*radius
    // circumference of a circle=2*PI*radius

    circum = 2*PI*radius;
    area = PI*(radius*radius);
    cout << "\nThe area of the circle is:" << area <<endl;
    cout << "\nThe circumference of the circle is:" << circum <<endl;


    return 0;
}
