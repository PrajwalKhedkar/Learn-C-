// STATIC DATA MEMBER AND FUNCTION

#include<iostream>
using namespace std;
class Employee
{   int ID;
    string name;
    int static count;   // static data member 
    public:
    void setdata();
    void display();
    void static getcount(); // static function : can access only other static data members
};

int Employee::count;              // static variable is by default 0 you can initialize it
void Employee::setdata()
{
    cout<<"Enter name of Employee:";
    cin>>name;
    cout<<"Enter ID of Employee:";
    cin>>ID;
    count++;
}
void Employee::display()
{
    cout<<"Name of Employee "<<count<<" : "<<name<<"\n";
    cout<<"ID of Employee "<<count<<" : "<<ID<<"\n";
}
void Employee::getcount()                 // static function
{
    cout<<"The value of count is "<<count<<endl;
    //cout<<ID;                 won't work because static function can't access any data member than static data member
}

int main()
{
    Employee A,B,C;
    A.setdata();
    A.display();
    Employee::getcount();                  // calling static function
    B.setdata();
    B.display();
    Employee::getcount();
    return 0;
}
