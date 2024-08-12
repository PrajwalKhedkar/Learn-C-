
// POINTER- 'new' AND 'delete' KEYWORDS

#include<iostream>
using namespace std;

int main()
{
    int a=4;
    int *ptr=&a; // ptr and &a is address of a while *ptr is value of a (i.e. 4)
    cout<<"Value of a is "<<*(ptr)<<endl;  // Dereference the pointer (getting value at pointer)
    float *p=new float(40.43);
    cout<<"Value at address p is "<<*p<<endl;
    int *arr=new int[5];
    arr[0]=11;
    arr[1]=12;
    *(arr+1)=13;
    arr[3]=14;
    arr[4]=15;
    cout<<"Value at arr[0] is "<<arr[0]<<endl;
    cout<<"Value at arr[3] is "<<arr[3]<<endl;
    cout<<"Value at arr+1 is "<<*(arr+1)<<endl;
    delete[] arr;
    cout<<"Value at arr[0] is "<<arr[0]<<endl; // garbage value due to memoery release
    cout<<"Value at arr[3] is "<<arr[3]<<endl;
    return 0;
}