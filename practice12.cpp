// Consructors with default argument

#include<iostream>
using namespace std;
class Point
{
    int a,b;
    public:
    Point(int x,int y=4) //Default argument
    {
        a=x;
        b=y;
    }
    void printdata()
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    Point p1(2),p2(11,12);
    p1.printdata();  //6
    p2.printdata();//23
    return 0;
}