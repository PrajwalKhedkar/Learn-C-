//FRIEND FUNCTION (MORE)

// Complex example

#include<iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a)
    {
        val1=a;
    }
    void display()
    {
        cout<<val1<<endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int b)
    {
        val2=b;
    }
    void display()
    {
        cout<<val2<<endl;
    }
};

void exchange(c1 & x,c2 & y)  // & is reference of objects . If it is not used then values won"t swap
{
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main()
{
    c1 o1;
    c2 o2;
    o1.indata(11);
    o1.display();
    o2.indata(22);
    o2.display();
    exchange(o1,o2);
    cout<<"After exchange"<<endl;
    o1.display();
    o2.display();
    return 0;
}
