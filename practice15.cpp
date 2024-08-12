// DESTRUCTOR
//destructor do not take any argument

#include<iostream>
using namespace std;
int count=0;
class num
{
    public:
    num() // Constructor
    {
        count++;
        cout<<"Constructor Invoked "<<count<<endl;
    }
    ~num() //Destrurctor     it automatically invoked when exit program
    {
        cout<<"Destructor Invoked "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"We are in main funtion"<<endl;
    cout<<"Creating first onject "<<endl;
    num n1; // constructor invoked 1
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3; // constructor invoked 2,3
        cout<<"Exiting this block"<<endl;
         //destructor invked 3,2
    }
    cout<<"Back to main"<<endl;
    //destructor invked 1
    return 0;
}