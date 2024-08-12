
// ABSTRACT CLASS AND PURE VIRTUAL FUNCTION

// Abstract base class contain atleast one pure virtual function
//pure virtual function => virtual function_name()=0;
//  used when you MUST redefine class in derived class
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
    virtual void display()=0;  // pure virtual function
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