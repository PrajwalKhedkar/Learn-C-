// FRIEND FUNCTION (MORE)

// Simplest example of friend function
#include<iostream>
using namespace std;
class c2;
class c1
{
    friend void add(c1 o1,c2 o2);
    int data;
    public:
    void setdata(int value)
    {
        data=value;
    }
};
class c2
{
    friend void add(c1 o1,c2 o2);
    int num;
    public:
    void setvalue(int value)
    {
        num=value;
    }
};
void add(c1 o1,c2 o2)
{
    cout<<o1.data+o2.num<<endl;
}

int main()
{
    c1 c;
    c2 d;
    c.setdata(5);
    d.setvalue(6);
    add(c,d);
    return 0;
}
