//STRUCTURE , UNION & ENUM

#include<iostream>
using namespace std;
struct Employee    //declaring struct
{
    int id;
    float salary;
    char fav;
};
// can also used as
typedef struct soldier    //declaring struct
{
    int id;
    float salary;
    char fav;
}erp;                      //object
// union - share memory for all data hence uses one data at a time after call
union human
{
    int rice;
    float car;
    char sleep;
};
// Enum used for alloction of name/number easily
enum meal
{breakfast=10,lunch=20,dinner};  // we can allocate any value to members and it  further cout as consucutive numbers of it

int main()
{
    struct Employee tony;           //using struct
    erp steve;
    union human m;
    m.rice=112;
    m.car=1234;//it overwite value of rice and give it garbage value
    steve.id=1000;
    steve.salary=12000;
    steve.fav='*';
    tony.id=1001;
    tony.salary=120000;
    tony.fav='$';
    cout<<m.rice<<endl;     // gives garbage value
    cout<<m.car<<endl;
    cout<<steve.id<<endl;
    cout<<steve.salary<<endl;
    cout<<steve.fav<<endl;
    cout<<tony.id<<endl;
    cout<<tony.salary<<endl;
    cout<<tony.fav<<endl;

    meal m1=breakfast;
    meal m2=lunch;
    meal m3=dinner;
    cout<<m2<<endl; // gives position of dinner in enum i.e. 20
    cout<<m3<<endl;  //21
    cout<<(m1==10)<<endl;   //gives 1(true) as breakfast is at 10 position
    cout<<(m1==1)<<endl; // gives 0 (false)
    return 0;
}
