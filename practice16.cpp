//        INHERITANCE

#include<iostream>
using namespace std;
class Employee      // Base class
{
    public:
    int id;
    float salary; // data members should public to inherite
    Employee(){}
    Employee(int inid)
    {
        id=inid;
        salary=34.75;
    }

};
class Programmer:public Employee // Derived class : 
{                                //class derived_class_name:visibility_mode  base_class_name
    public:                      // visibility mode =public,protected and private(by default private)
    Programmer(){}
    Programmer(int inpid)
    {
        id=inpid;
    }
    int language_code=9;
    void getdata()
    {
        cout<<id<<endl;
    }
};
int main()
{
    Employee ab(11),cd(12);
    cout<<ab.salary<<endl;
    cout<<cd.salary<<endl;
    Programmer ef(13);
    cout<<ef.language_code<<endl;
    cout<<ef.salary<<endl;  //?? gives garbage value
    cout<<ef.id<<endl; // can't access while base class is private
    ef.getdata();
    return 0;
}