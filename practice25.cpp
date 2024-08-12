// INITIALIZATION LIST IN CONSTRUCTOR

/*
syntax:

constructor(argument list):initializaton section
{
    assignment+other code;
}
*/

#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
   // Test(int i,int j):a(i),b(j) //value i and jinitialized to a and b
   // Test(int i,int j):a(i),b(i+j) // return b as i+j
   // Test(int i,int j):a(i),b(a+j) //value of a can used
   // Test(int i,int j):b(j),a(b+i) // a gives garbge value as it initialize first because it declared first
    // Test(int i,int j):a(i) //This syntax can also used (use b=j in constructor body)
    Test(int i,int j)//General syntax
    {
        a=i;
        b=j;
        cout<<"Constructor"<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};
int main()
{
    Test t(1,2);      
    return 0;
}