// AMBIGUTY IN MULTIPLE INHERITANCE


#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;
    public:
    void seta(int a1)
    {
        a=a1;
    }
    void geta()
    {
        cout<<a<<endl;
    }
    void ret()
    {
        cout<<a*a<<endl;
    }
};

class base2
{
    protected:
    float b,c;
    public:
    void setb(float b1,float b2)
    {
        b=b1;
        c=b2;
    }
    void getb()
    {
        cout<<b+c<<endl;
    }
     void ret()
    {
        cout<<b*c<<endl;
    }
};

class derived:public base1, public base2
{
    public:
    void display()
    {
        geta();
        getb();
       // ret();// same function in both base classes hence ambiguty (diamond problem)
    }
    void ret()
    {
        base1::ret(); // ret of base 1 will return
    }
};
int main()
{
    base1 b1;
    base2 b2;
    derived d;
    d.seta(10);
    d.setb(11.10,22.20);
    d.display();
    d.ret();// return base1 ret()
    return 0;
}