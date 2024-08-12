// MAP
//A collection of key-value pairs, usually implemented as a binary search tree.
// The keys are unique and ordered.


//UNORDERED MAP
//A collection of key-value pairs with no specific order, 
//usually implemented as a hash table.


#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    map<string, int> phonebook;
    phonebook["Alice"] = 123;
    phonebook["Bob"] = 456;
    //FOR BOTH
    //size(),find(),empty(),max_size(),begin(),end(),erase()
    phonebook.insert(make_pair("Camron",789));//insert by making pair
    cout<<phonebook["Camron"]<<endl;//value of key
    return 0;
}