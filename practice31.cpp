// VIRTUAL FUNCTION

#include<iostream>
using namespace std;

class Base
{
    public:
    int var_base=11;
    virtual void display() // making virtual will run display of derived class as pointer of base points derived class
    {
        cout<<"Displaying Base class variable"<<endl;
    }
};
class Derived:public Base
{
    public:
    int var_derived=23;
    void display()
    {
        cout<<"Displaying Derived class variable"<<endl;
    }
};
int main()
{
    Base *Base_pointer;
    Base obj_base;
    Derived *Derived_pointer;
    Derived obj_derived;
    Base_pointer=&obj_derived;
    Base_pointer->display();// as base class function is virtual pointer of it will take function of pointed(derived) class
    return 0;
}