// INBUIL DATA STRUCTURES
// VECTOR
//A dynamic array that can resize itself when an element is added or removed.
//Used when you need an array that can change size.
#include<iostream>
#include<vector> // using vector
using namespace std;
class ComputerA
{
    public:
    vector<int>list;
    ComputerA()// Initializing vector in constructor
    {
        for(int i=0;i<5;i++)
        {
            list.push_back(i+1); //Inserting in vector from back
        }
    }
    void display()
    {
        for(int i=0;i<list.size();i++)
        {
            cout<<list[i]<<"\t";
        }
        cout<<"end"<<endl;
    }
};
int main()
{
    ComputerA ca;
    vector<int>dec={10,20,30,40};
    int num;
    ca.display();
    //Fuctions
    cout<<"Max size is:"<<ca.list.max_size()<<endl;
    cout<<"Fornt is:"<<ca.list.front()<<endl;//First element
    cout<<"Back is:"<<ca.list.back()<<endl;//Last element
    ca.list.pop_back();//delete last
    ca.display();
    cout<<"Size is:"<<ca.list.size()<<endl;//Size of vector
    cout<<"Data is:"<<ca.list.data()<<endl;//Returns a pointer to the underlying array serving as the vector's storage
    ca.list.swap(dec);//Swap data
    ca.display();
    ca.list.clear();//Clear data
    ca.display();
    return 0;
}
