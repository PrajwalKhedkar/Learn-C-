// POINTER TO OBJECT

#include<iostream>
using namespace std;
class Complex
{
    int real,imaginary;
    public:
    void getdata()
    {
        cout<<"Real part is "<<real<<endl;
        cout<<"Imaginary part is "<<imaginary<<endl;

    }
    void setdata(int a,int b)
    {
        real=a;
        imaginary=b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr=new Complex;  //Another method 
   // (*ptr).setdata(11,54);
    ptr->setdata(11,55);//same as above   -> arrow operator(used in this pointer)
    //(*ptr).getdata();
    ptr->getdata();//same as above

    Complex *ptr1=new Complex[4]; //  Making  Array object
    ptr->setdata(11,55);
    ptr->getdata();
    return 0;
}