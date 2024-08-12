
// FILE HANDLING
// READ AND WRITE 

#include<iostream>
#include<fstream>
using namespace std;
// classes 
// fstream,ofstream,ifstream


// opening files 
// 1. using constructor
// 2. using open() function
int main()
{
    string st="TONY STARK",st2;
    //(opening files using constructor)
   // ofstream obj1("practice34.txt"); //Write operation on file sample.txt
   // obj1<<st; // << to write

    ifstream obj2("practice34.txt"); //Read operation on file sample.txt
    //obj2>>st2; // >> to read (only print first world)
    getline(obj2,st2); //get full line
    cout<<st2;
    return 0;
}
