// CONSTRUCTOR OVERLOADING

#include<iostream>
using namespace std;
class Complex
{
    int x,y;
    public:
    Complex(int a,int b)
    {
        x=a;
        y=b;
    }
    Complex(int a)
    {
        x=a;
        y=0;
    }
    void printdata()
    {
        cout<<x+y<<endl;
    }
};
int main()
{
    Complex c1(11,12),c2(4);
    c1.printdata();
    c2.printdata(); // constructor overloaded
    return 0;
}