
//  this POINTER 

// it is pointer point to object which invokes member function
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    // void setdata(int a) //
    // {
    //     this->a=a; // using this pointer same name of data can given to prarameter(no need to declare)
    // }
    A& setdata(int a) // another method
    {
        this->a=a;
        return *this;//returns object
    }
    void getdata()
    {
        cout<<"Value of a is : "<<a<<endl;
    }
};
int main()
{
    A a;
    a.setdata(5);
    a.getdata();
    return 0;
}