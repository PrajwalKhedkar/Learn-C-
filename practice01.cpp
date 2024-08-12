// BASICS RELATED TO CLASS AND OBJECT

#include <iostream>
using namespace std;
class operations             //This is class opeartions
{   private:                // Further data is private
    int a,b;
    public:                 // Data further will be public hence accessable to all functions
    int c,d;                
    void getdata();
    int operation()         // function defined inside class
    {
        c=a+b;
        d=a-b;
    }
    void result();
};                         // class ends here

void operations::getdata()   // function defined outside class by scope resolution operator ::
{
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
}
void operations::result()
{
    cout<<"addition is:"<<c<<"\n";
    cout<<"substraction is:"<<d<<"\n";
}

int main()
{
    operations op;                        // created object op of class operations
    op.getdata();                         // calling functions one by one using object
    op.operation();
    op.result();
   // op.a;               can not do cause a is private
    return 0;
}
