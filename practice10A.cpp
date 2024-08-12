// DEFAULT AND PARAMETERIZED CONSTRUCTOR

#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    Complex(int ,int );
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex::Complex(int x,int y)  // paramertized constructor(takes parameter)
{
    a=22;
    b=11;
    cout<<"HI"<<endl;
}

int main()
{
    // implicit call
    Complex c1(4,6);
    // explicit call
    Complex b=Complex(3,4);
    //c1.display();
    //b.display();
    return 0;
}