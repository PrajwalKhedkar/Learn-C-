
// FUNCTION AND FUNCTION PROROTYPE , CALL BY VALUE & CALL BY REFERENCE

#include<iostream>
using namespace std;

int sum(int a, int b)  // function sum with 2 input parameters
{
    int s=a+b;
    return s;
}

//function prototype 

int sub(int c,int d);   //declaring function for assurity to compiler
 //int sub(int c,int d);  acceptable
 //int sub(int c, d);     not acceptable
 //int sub(int ,int );    accepable

// this fuction can be defined after main function

//void greet(void) acceptable
void greet()
{
    cout<<"Good afternoon\n";
}

/*
    void swap(int x,int y)     // unable to swap cause it swaps formal parameters and cant actual
{
    int temp=x;
    x=y;
    y=temp;
}

*/
// Call by reference using pointer
void swapPointer(int *x,int *y)     // able to swap due to address is passed as parameters hence it swap address
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
 int swapCppref(int &x,int &y)     // able to swap due to use of reference variables
{
    int temp=x;
    x=y;
    y=temp;                   
}
 int &swapCpprefret(int &x,int &y)     // able to swap due to use of reference variables  & before function name is necessary to return
{
    int temp=x;
    x=y;
    y=temp;
    return x;                         // return by reference variable
}
int main()
{
    int p,q;

    greet();  //call  to function
    // greet(void);  gives error
    cout<<"Enter the number 1:"<<endl;
    cin>>p;
    cout<<"Enter the number 2:"<<endl;
    cin>>q;
    cout<<"Sum is : ";
    cout<<sum(p,q)<<endl;// a,b are formal parameters and p,q are actual parameters
    cout<<"Sub is : ";
    cout<<sub(p,q)<<endl;

    //swap(p,q);            //unable to swap
    swapPointer(&p,&q);  // call by reference with help of pointers
    cout<<"After swapping with call by reference:"<<endl;
    cout<<p<<"\n"<<q<<endl;

    swapCppref(p,q);           // using reference variables in C++
    cout<<"After again swapping using reference variables:"<<endl;
    cout<<p<<"\n"<<q<<endl; //(again swapped to original)

    swapCpprefret(p,q) = 100; // changes p to value 100
    cout<<"After again swapping with reference variables with return:"<<endl;
    cout<<p<<"\n"<<q<<endl; // (again swapped but value of p is fixed to 100)

    return 0;
}
// Function can defined after main function but must defined before it.
int sub(int c,int d)
{
    int r=c-d;
    return r;
}







