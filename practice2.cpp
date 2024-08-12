// NESTING OF MEMBER FUNCTIONS

//program for one's complement

#include<iostream>
using namespace std;

class binary
{
    string bin;
    void readdata(void);

    public:
    void getdata(void);
    void ones(void);
    void display(void);

};
void binary::getdata(void)
{
    cout<<"Enter the number:"<<endl;
    cin>>bin;
}

void binary::readdata(void)
{
    for(int i=0;i<bin.length();i++)             // For loop on string upto 
    {
        if ((bin.at(i)!='0')&&(bin.at(i)!='1'))  // for each index 'i' checking if it is 0 or 1
        {
            cout<<"Incorrect binary code!!!";
            exit(0);                              // exiting with error code 0
        }
    }
}
void binary::ones()                     // changing 0 to 1 and 1 to 0
{
    readdata();                            // calling one function in another i.e.  nesting
    for(int i=0;i<bin.length();i++)
    {
        if (bin.at(i)=='0')
        {
            bin.at(i)='1';
        }
        else
        {
            bin.at(i)='0';
        }
    }
    display();
}
void binary::display()
{
    cout<<"One's comlement is:\n"<<bin<<"\n";
}


int main()
{
    binary b;
    b.getdata();
   // b.readdata();   already called in ones
    b.ones();
   // b.display(); already called in ones
    return 0;
}