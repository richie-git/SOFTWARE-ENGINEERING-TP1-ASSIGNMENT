// Problem 3 - A function to compute Fibonacci sequence

#include <iostream>

using namespace std;

void print_Fibonacci(int input);

int Fibonacci(int input){

if (input ==0 || input ==1)
{
    return input;
}
else
{
    return Fibonacci(input -1)+ Fibonacci(input -2);
}
}

int main()
{
    int input, j=0;
    cout<< " Please, enter the rank of sequence:";
    cin>>input;
    for (int i=1; i<=input; i++)

    {
        int result=Fibonacci(j);
        cout<<result<< " ";
        j++;
    }
}































