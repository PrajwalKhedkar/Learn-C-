// MULTIPLE INHERITANCE


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
};

class derived:public base1, public base2
{
    public:
    void display()
    {
        geta();
        getb();
    }
};
int main()
{
    derived d;
    d.seta(10);
    d.setb(11.10,22.20);
    d.display();
    return 0;
}