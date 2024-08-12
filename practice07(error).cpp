// FRIEND CLASS

#include<iostream>
using namespace std;
// Need forward declartion of friend class i.e. declare friend class before class in it is used (not necessary to define  but must declare)
class Calculator
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int sumrealcomplex(Complex, Complex);
    int sumcompcomplex(Complex, Complex);
};


class Complex
{
    int a;
    int b;
    public:
    friend int Calculator::sumrealcomplex(Complex,Complex);
    friend int Calculator::sumrealcomplex(Complex,Complex);
    void setData(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void display()
    {
        cout<<"Your Complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }

};

int Calculator::sumrealcomplex(Complex c1,Complex c2)
{
    return c1.a+c2.a;
}
int Calculator::sumcompcomplex(Complex c1, Complex c2)
{
  return c1.b+c2.b;
}


int main()
{
    Complex c1,c2;
    Calculator s;
    c1.setData(5,4);
    c2.setData(4,5);
    c1.display();
    c2.display();
    int resr=s.sumrealcomplex(c1,c2);
    return 0;
}
