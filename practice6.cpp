// FRIEND FUNCTION 

// Program of COMPLEX NUMBER using FRIEND FUNCTION
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void setData(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void display()
    {
        cout<<"Your Complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }
    friend Complex sumcomplex(Complex a1,Complex b2); //Declared sumcomplex as friend function of class Complex    (Can declared in public or private anywhere)
};

Complex sumcomplex(Complex o1,Complex o2)// Another function accessing data of Complex
{                                      // It need object to access data member (object_name.data_member_name)
    Complex o3;                        // Object o3 of Complex
    o3.setData(o1.a+o2.a,o1.b+o2.b);    // a and b are private data of Complex called by sumcomplex i.e. friend function
    return o3;
}

int main()
{
    Complex c1,c2,s;
   /*
   int i,j;
    cin>>i;
    cin>>j;
   */ 
    c1.setData(5,6);              //can be replaced by i,j
    c1.display();
    c2.setData(6,5);              //can be replaced by i,j
    c2.display();
    s=sumcomplex(c1,c2);           // calling friend function
    s.display();
    return 0;
}