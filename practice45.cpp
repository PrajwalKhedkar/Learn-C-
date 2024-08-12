// SET 
//A collection of unique elements, usually implemented as a binary search tree.
//and 
//UNORDERED SET
//A collection of unique elements with no specific order, 
//usually implemented as a hash table.

#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
void display(set<int> set1)
    {
        for(int n:set1)
        {
            cout<<n<<"\t";
        }
        cout<<"end"<<endl;
    }
int main()
{
    set<int>set1={3,2,5,1};
    //empty()
    //size()
    set1.insert(11);//insert at end
    display(set1);
    //set1.find(5);//find
    set1.erase(5);// delete
    display(set1);
     unordered_set<int> mySet = {3, 1, 4, 1, 5, 9};

    // Display the elements of the unordered_set
    for (int n : mySet) {
        cout << n << " ";
    }
    cout << endl;

    // Insert an element
    mySet.insert(2);

    // Find and erase an element
    auto it = mySet.find(3);
    if (it != mySet.end()) {
        mySet.erase(it);
    }

    // Display the modified unordered_set
    for (int n : mySet) {
        cout << n << " ";
    }
    cout << endl;

    // Display bucket information
    cout << "Bucket count: " << mySet.bucket_count() << endl;
    cout << "Load factor: " << mySet.load_factor() << endl;
    cout << "Max load factor: " << mySet.max_load_factor() << endl;

    return 0;
}
