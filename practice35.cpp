
// READ,WRITE AND CLOSE PROGRAM


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // connecting file to t_out stream
    ofstream t_out("practice35.txt");
    //creating name string and fililng with user input
    cout<<"Enter your name :";
    string name;
    cin>> name;
    //write string to file
    t_out<<"My name is "+name<<endl;
    t_out.close();

    ifstream t_in("practice35.txt");
    string content;
    t_in>>content;
    cout<<"Content of file is: "<<content<<endl;
    t_in.close();
    return 0;
}