
// POINTERS TO DERIVED CLASS

#include<iostream>
using namespace std;
class A
{
    public:
    int var_A;
    void display()
    {
        cout<<"Displaying Base class variable"<<endl;
    }
};
class B :public A
{
    public:
    int var_B;
    void display()
    {
        cout<<"Displaying Derived class variable"<<endl;
    }
};

int main()
{
    A *A_pointer;//pointer of base class
    A obj1;
    B *B_pointer;// pointer of derived class
    B obj2;
    A_pointer=&obj2;   //base class pointer pointing derived class
    A_pointer->display(); // this fuction is of base class i.e. function of base class is invoked instead of derived and known as late binding
   // A_pointer->var_B; //can't be accessed
   A_pointer->var_A; // can be accessed
   B_pointer->display();
   B_pointer->var_B;
    return 0;
}