// ARRAY OF OBJECT USIMG POINTER

#include<iostream>
using namespace std;
class shop
{
    int id;
    float price;
    public:
    void setdata(int a, float b)
    {
        id=a;
        price=b;
    }
    void getdata()
    {
        cout<<"Code of item is "<<id<<endl;
        cout<<"Price of item is "<<price<<endl;
    }
};
int main()
{
    int i,p;
    int size=3;
    float q;
   // int *ptr= &size; // address of size in ptr
  // int *ptr= new int[35];// allocating memoery of 35 integers and ptr contain first memory only
   shop *ptr=new shop[size]; // (like int *ptr = something) making size no. of (10) object
   shop *ptrtemp=ptr;
   for(i=0;i<size;i++)
   {
    cout<<"Enter Id and price of item "<<i+1<<":"<<endl;
    cin>>p>>q;
    ptr->setdata(p,q);
    ptr++;
   }
   for(i=0;i<size;i++)
   {
    cout<<"Item number : "<<i+1<<endl;
    ptrtemp->getdata();
    ptrtemp++;
   }
    return 0;
}