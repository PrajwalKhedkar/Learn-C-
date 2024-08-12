
// DEFAULT DATA TYPE TO TEMPLATE

#include<iostream>
using namespace std;
template <class T1=int,class T2=char>
class PK
{
    public:
    T1 a;
    T2 b;
    PK(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"A is "<<a<<endl;
        cout<<"B is "<<b<<endl;
    }
};
int main()
{
    PK<> pk(12,'K');//default template
    pk.display();
    return 0;
}