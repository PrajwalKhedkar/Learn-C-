// CONSTRUCTOR


#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
    // constructor declared
    //it must declared in PUBLIC 
    // its name is same as classs name
    // it is automatically invoked(called) when object is created
    // do not have return type
    // can have default arguments

    Complex(void);
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
//defining costructor (Same as class)
Complex::Complex(void)  // default constructor (do not take parameters)
{
    a=22;
    b=11;
    cout<<"HI"<<endl;// automatically printed when object invoked any function
}

int main()
{
    Complex c1;
    c1.display();
    return 0;
}
