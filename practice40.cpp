
// FUNCTION TEMPLATE

#include<iostream>
using namespace std;


int funcavg1(int a,int b)
{
    float avg=(a+b)/2;
    return avg;
}

template<class T1,class T2>
int funcavg2(T1 a,T2 b)
{
    float avg=(a+b)/2;
    return avg;
}



int main()
{
    float b=funcavg1(12,45);
    float c=funcavg2(12.5,45.5);
    cout<<b<<endl<<c<<endl;
    return 0;
}