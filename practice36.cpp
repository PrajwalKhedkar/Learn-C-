
// OPEN AND EOF


#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("practice36.txt");
    out<<"This is me."<<endl;
    out.close();

    ifstream in;
    string st;
    in.open("practice36.txt");
    //in>>st;
    //cout<<st<<endl;
    while(in.eof()==0)  //printing till end of line (eof).
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}