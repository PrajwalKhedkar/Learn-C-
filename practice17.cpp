// SINGLE INHERITANCE
#include<iostream>
using namespace std;
class Base
{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();

};
void Base::setdata()
{
    data1=10;
    data2=20;
}
int Base:: getdata1()
{
    return data1;
}
int Base:: getdata2()
{
    return data2;
}

class Derived :public Base
{
    int data3;
    public:
    void process();
    void display();
};
void Derived::process()
{
  //  setdata();     //used when base is private
    data3=data2*getdata1();
}
void Derived::display()
{
    cout<<getdata1()<<endl;          //called data 1 through function as it private
    cout<<data2<<endl;   // data 2 is public hence can called
    cout<<data3<<endl;   // derived class data
}
int main()
{
    Derived d;
    d.setdata(); // it cant called directly when base is private
    d.process();
    d.display();
    return 0;
}