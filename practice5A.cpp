// ARRAY OF OBJECT

#include<iostream>
using namespace std;
class Employee
{
    int ID,salary;
    public:
    void setData()
    {
        salary=720;
        cout<<"Enter id of Employee:";
        cin>>ID;
    }
    void getData()
    {
        cout<<"ID of this Employee is "<<ID <<endl;
    }
    void display()
    {

    }
};
int main()
{
    Employee e[4];                      // array of object
    for (int i=0;i<4;i++)
    {
        e[0].setData();
        e[0].getData();
    }
    
    /*Employee Ram,Sham,Radha,Sita;
    Ram.setData();
    Ram.getData();
    Sita.setData();
    Sita.getData();
    Sham.setData();
    Sham.getData();
    Radha.setData();
    Radha.getData();*/
    return 0;
}