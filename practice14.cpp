//    COPY CONSTRUCTOR

#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number() {a=0;} //have to make default constructor to other constructors work

    number(int num) 
    {
        a=num;
    }
    number(number &obj) //copy constructor reference of object is given
    {
        a=obj.a;
        cout<<"Copy constructor invoked"<<endl;  //on commenting this constructor default copy constructor used by compiler
    }
    void display()
    {
        cout<<"Number is:"<<a<<endl;
    }
};

int main()
{
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    number z1(x); //copy constructor invoked
    z1.display();
    z2=z;//copy constructor not invoked
    z2.display();
    number z3=z;//copy constructor invoked
    z3.display();

    return 0;
}