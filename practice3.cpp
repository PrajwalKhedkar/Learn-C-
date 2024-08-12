// MEMOERY ALLOCATION

#include<iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int Counter;
    public:
    void initCounter(void) {Counter=0;}           // setting counter to 0
    void setPrice();
    void displayPrice();
};
void Shop::setPrice()
{
    cout<<"Enter item ID:";
    cin>>itemId[Counter];
    cout<<"Enter item Price:";
    cin>>itemPrice[Counter];
    Counter++;                                   // Incremennt in counter by 1
}
void Shop::displayPrice()
{
    for(int i=0;i<Counter;i++)
    {
        cout<<"Price of item with ID "<<itemId[i]<<" is Rs."<<itemPrice[i]<<"\n"; //loop to display data
    }
    
}


int main()
{
    Shop info;
    info.initCounter();         // call counter first or program crash / send garbage value
    info.setPrice();
    info.setPrice();
    info.setPrice();
    info.displayPrice();
    return 0;
}