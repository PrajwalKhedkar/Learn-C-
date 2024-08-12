

// VIRTUAL FUNCTION CREARTION

// 1. Virtual functions can't be static
// 2.They accessed by object pointer
//3.They can be friend of another class
//4.A virtual function in base class might not be used
//5.If virtual function defined in base class there is no neccessity to redefine in derived class

#include<iostream>
using namespace std;

class marks
{
    protected:
    string name;
    int phychem;
    public:
    marks(string n,int pc)
    {
        name=n;
        phychem=pc;
    }
    virtual void display()  // won't call this display by m
    {

    }
};
class engineering:public marks
{
    int maths;
    public:
    engineering(string n,int pc,int m):marks(n,pc)
    {
        maths=m;
    }
    void display()
    {
        cout<<"Score of "<<name<<" in engineering is "<<maths+phychem<<endl;
    }
};
class medical:public marks
{
    int bio;
    public:
    medical(string n,int pc,int b):marks(n,pc)
    {
        bio=b;
    }
    void display()
    {
        cout<<"Score of "<<name<<" in medical is "<<bio+phychem<<endl;
    }
};
int main()
{
    string name;
    int math,bio,phychem;

    name="Tony";
    math=97;
    phychem=180;
    bio=87;
    engineering e(name,phychem,math);
    medical b(name,phychem,bio);
    marks *m[2];
    m[0]=& e;
    m[1]=& b;
    m[0]->display();
    m[1]->display();
    return 0;
}