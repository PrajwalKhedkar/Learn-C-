// MULTILEVEL INHERITANCE

#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void set(int a1)
    {
        a=a1;

    }
    void get()
    {
        cout<<a<<endl;
    }

};
class derived1:public base
{
    protected :
    float b;
    float c;
    public:
    void setb(float b1,float c1)
    {
        b=b1;
        c=c1;
    }
    void getb()
    {
        cout<<b<<endl;
        cout<<c<<endl;
    }
};
class derived2:public derived1
{
    float d;
    public:
    void display()
    {
        get();
        getb();
        cout<<(b+c)/2<<endl;
    }
};
int main()
{
    derived2 d21,d22;
    d21.set(11); // object of derived-derived class ca access fuction of base class
    d21.setb(24.5,23.6);// object of derived-derived class ca access fuction of derived class
    d21.display();
    return 0;
}
