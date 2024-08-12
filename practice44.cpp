//DEQUE
//A double-ended queue that allows for fast insertions and deletions at both the beginning and end.

#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>queue={1,2,3};

    //front()
    //back()
    //push_back(int)
    //push_front(int)
    //pop_back()
    //pop_front()
    //clear()
    //max_size()
    //size()
    cout<<queue.empty()<<endl;//checks if queue is empty and if return 1
    return 0;
}