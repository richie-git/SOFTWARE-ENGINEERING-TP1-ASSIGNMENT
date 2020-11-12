// Problem 2 - A function to find the Maximum and Minimum values of a set of numbers

#include <iostream>

#include <stdio.h>


int main (void)

{


    // Determine Maximum and Minimum Value

    int Arr[10] = {28,8,7,14,11,25,32,40,13,35};
    int Max_val = Arr[0];
    int Min_val = Arr[0];
    int i;
    for(i = 1; i < 10; i++)
    {
        if(Max_val < Arr[i])
            Max_val = Arr[i];
        if(Min_val > Arr[i])
            Min_val = Arr[i];
    }

    std::cout << "\nThe Minimum value is : \n" << Min_val <<std::endl;
    std::cout << "\nThe Maximum value is = \n" << Max_val <<std::endl;

    return 0;

}















