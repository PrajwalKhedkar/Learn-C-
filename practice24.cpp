
// CONSTRUCTOR IN DERIVED CLASS
#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void print_data1()
    {
        cout << "Value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void print_data2()
    {
        cout << "Value of data2 is " << data2 << endl;
    }
};
class derived : public base1, public base2// if order changed of base1 with base2 constructor order change
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b) //changing  base1 and base2 order don't change order
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void print_data3()
    {
        cout << "Value of derived1 is " << derived1 << endl;
        cout << "Value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    derived d(1,2,3,4); // order of constructor base1,base2,derived
    d.print_data1();
    //d.print_data2();
    //d.print_data3();
    return 0;
}