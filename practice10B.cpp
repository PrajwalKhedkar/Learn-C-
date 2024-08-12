#include<iostream>
using namespace std;

class Point
{
    int x,y;
    public:
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<"\n"<<y<<endl;
    }
};
int main()
{
    Point c(4,5); // passing argument t0 constructor
    c.display();
    return 0;
}