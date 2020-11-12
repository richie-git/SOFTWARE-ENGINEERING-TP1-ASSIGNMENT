// Problem 4 - A function to display Multiplication Table of a Number

#include <iostream>

using namespace std;

int main()
{



int number, multiplier;

    cout << "Enter a number";

    cin >> number;

    for (multiplier=1; multiplier<=10; multiplier++){


        cout << number << "*" << multiplier << " = " << ( number * multiplier ) <<endl;
    }

    return 0;
}




