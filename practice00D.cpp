// INLINE FUNCTION , DEFAULT ARGUMENTS & CONSTANT ARGUMENTS


// it saves value of output in temperory memory and reuse it when function called again 
// make such functions inline which take least memory and do least work
// Don't use in reccursion,static 


// static variable - any value set for once(temperory) if it changes then it keeps changed value


#include<iostream>
using namespace std;

//int multi1(int a,  int b)  // inline function
//{
//    int c=a*b;
//    return c;
//}
//inline int multi2(int x,  int y)  // inline function
//{
//    return x*y;  //replace p*q here
//}
float interest (float money,float rate=1.04)   // default argument is given (it should gave at last ) to avoid runtime error after call
{
    return money*rate;
}
//int strlen(const char *p)
//{

//}
//constant argument is defined by const to keep value constant and shouldn't changed.
int main()
{
    //int p=4,q=5;
    //cout<<multi1(p,q)<<endl;
    //cout<<"For inline:";
    //cout<<multi2(p,q)<<endl;
// no change in output seen but time reduces
    cout<<interest(10000)<<endl;
    return 0;
}
