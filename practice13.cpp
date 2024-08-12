// DIIFRENT TYPE OF INPUT PARAMETERS TO CONSTRUCTOR

#include<iostream>
using namespace std;

class Bank
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;
    public:
    void show()
    {
        cout<<"Principal amount was "<<principal<<" Rs."<<endl;
        cout<<"Return after "<<year<<" years is "<<returnvalue<<endl;
    }
    Bank()
    {

    }
    Bank(int p,int y,float r)
    {
        principal=p;
        year=y;
        interestrate=r;
        returnvalue=principal;
        for(int i=0;i<y;i++)
        {
            returnvalue+=(1+interestrate);
        }
        
    }
    Bank(int p,int y,int r)
    {
        principal=p;
        year=y;
        interestrate=float (r)/100;
        returnvalue=principal;
        for(int i=0;i<y;i++)
        {
            returnvalue+=(1+interestrate);
        }
    }
};
int main()
{
   Bank b1,b2,b3;
   int p,y,R;
   float r;

   cout<<"By point"<<endl;
   cout<<"Enter p,y and r"<<endl;
   cin>>p>>y>>r;
   b1=Bank(p,y,r);
   b1.show();

   cout<<"By Percent"<<endl;
   cout<<"Enter p,y and r"<<endl;
   cin>>p>>y>>R;
   b2=Bank(p,y,R);
   b2.show();

   b3=Bank(); 
    return 0;
}