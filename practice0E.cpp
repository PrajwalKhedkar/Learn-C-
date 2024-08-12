// RECURSSION & RECCURSSIVE FUNCTION , FUNCTION OVERLOADING

#include<iostream>
using namespace std;
/*
// recurrssive functions
int factorial(int n)  // factorial
{
    if (n==1)
    {
        return 1;
    }
    return n*factorial(n-1);       // reccurssion of function
}
int fib(int f) //fibonacci series
{
    if (f<2)
    {
        return 1;
    }
    return fib(f-2)+fib(f-1);
}
int main()
{   
    int n,f;
    cin>>n;
    cout<<factorial(n)<<endl; // factorial multiplication will obtained.
    cin>>f;
    cout<<fib(f)<<endl; // gives number at position f in fibonacci series
    return 0;
}
*/

// FUNCTION OVERLOADING

int sum(int a,int b)
{
    cout<<"SUM1:"<<endl;
    return a+b;
}
int sum(int a,int b,int c)
{
    cout<<"SUM2:"<<endl;
    return a+b+c;
}

int main()
{
    int a,b,c;
    cout<<sum(1,2)<<endl;    // C++ calls function with same name by checking  arguments give
    cout<<sum(3,4,5)<<endl;  // but if arguments number also same then error occurs
    return 0;
}