
// VITRUAL BASE CLASS

#include<iostream>
using namespace std;
class base
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

class der1:virtual public base
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
};

class der2:virtual public base
{
    protected:
    float d,e;
    public:
    void setc(float d1,float e1)
    {
        d=d1;
        e=e1;
    }
    void getc()
    {
        cout<<d-e<<endl;
    }
};
    class derived:public der1,public der2
    {
    public:
    void display()
    {
        geta();
        getb();
        getc();
    }
};

int main()
{
    base b;
    der1 d1;
    der2 d2;
    derived d;
    d.seta(10);// used inherited from base class
    d1.seta(12);//not set 
    d.setb(11.10,22.20);
    d.setc(12.80,1.20);
    d.display();
    return 0;
}