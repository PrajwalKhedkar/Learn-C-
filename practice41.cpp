
// OVERLOADING TEMPLATE FUNCTION


#include<iostream>
using namespace std;
template<class T>
class PK
{
    public:
    T data;
    PK(T a)
    {
        data=a;
    }
    void display();
};
template<class T>
void PK<T>:: display()
    {
        cout<<data<<endl;
    }

void func(int a)
{
    cout<<"I am first func"<<a<<endl;
}
template <class T>
void func(int a)
{
    cout<<"I am first func"<<a<<endl;
}
template <class T>
void func(char a)
{
    cout<<"I am first func"<<a<<endl;
}


int main()
{
    //PK<int>pk(63);
    //cout<<pk.data<<endl;
    //pk.display();
    func('c');
    return 0;
}