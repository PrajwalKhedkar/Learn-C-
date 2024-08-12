//LIST
//A doubly linked list that allows for efficient insertion and deletion from both ends.

#include<iostream>
#include<list>
using namespace std;
void display(list<int> score)
{
    for(int n:score)
    {
        cout<<n<<"\t";
    }
    cout<<endl;
}
int main()
{
    list<int>score={225,225,436,124,349,119,124};
    list<int>add={1,3,5,4,2};
    cout<<score.front()<<endl;
    cout<<score.back()<<endl;
    display(score);
    score.push_front(11);//push 11 at front
    score.push_back(99);//push 99 at back
    display(score);
    score.pop_back();//
    display(score);
    //  size()
    // clear()
    // swap()
    score.unique();//remove consicutive duplicates
    display(score);
    score.sort();//Sort
    display(score);
    score.reverse();//reverse
    display(score);
    score.merge(add);// Merges other into the current list, assuming both are sorted.
    display(score);
    return 0;
}