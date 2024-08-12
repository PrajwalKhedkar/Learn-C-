// PASSING OBJECT AS PARAMETER IN FUNCTION

// Program of COMPLEX NUMBER

#include<iostream>
using namespace std;
class Complex
{
    int a,b;                                  //private
    public:
    void setdata(int v1,int v2)
    {
        a=v1;                                 // setting private data members to other value hence it can use in public without direct access
        b=v2;
    }
    void setsum(Complex o1,Complex o2)  // o1 and o2 are object of class (it can be of any class here it belongs to same class)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void displaydata()
    {
        cout<<"Your complex number is : "<<a<<"+"<<b<<"i"<<endl;
    }
    void displaysum()
    {
        cout<<"Your sum is : "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main()
{
    Complex c1,c2,s;
    c1.setdata(4,5);
    c2.setdata(5,4);
    c1.displaydata();
    c2.displaydata();
    s.setsum(c1,c2);
    s.displaysum();

    return 0;
}