// Problem 5 -  A Function to compute Truth table with operators AND & OR using three variables

#include <iostream>
#include<cmath>
#include<conio.h>
using namespace std;

bool Truth_Table()
      {

    bool result;
    int x, y, z;
    cout << "\nThe AND and OR Operator for three inputs" <<endl;
    cout << "The Logical Operator OR :" <<endl;
    cout << "| x | y | z |result" <<endl;
    for(x = 0; x<=1; x++)
      {
        for (y = 0; y<=1; y++)
            {
                for (z = 0; z<=1; z++){
                    result = x || y || z;
                    cout << "| " << x << " | " << y <<" | " << z <<" | " <<result <<endl;
                }
            }
    }

   cout << " \nThe Logical Operator AND " <<endl;
    for(x = 0; x<=1; x++)
      {
        for (y = 0; y<=1; y++)
            {
                for (z = 0; z<=1; z++){
                    result= x && y && z;
                    cout << "| " << x << " | " << y <<" | " << z <<" | " << result <<endl;
                }
            }
    }

   return 0;
}

int main()
{
  cout<<"\nTruth table for AND and OR Logical Operators"<<endl;
	Truth_Table();
    return 0;
}
