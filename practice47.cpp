// STACK
//a container adapter that provides LIFO (last-in, first-out) stack functionality.

//QUEUE
//a container adapter that provides FIFO (first-in, first-out) queue functionality.

//PRIORITY QUEUE
//it is a container adapter that provides priority queue functionality,
 //where elements are ordered by a priority criterion.
#include<iostream>
using namespace std;
#include<stack>
#include<queue>//both queue and priority queue
#include <functional> // Include for std::greater and std::less
int main()
{
    stack<int>stk;
    //empty() //swap
    stk.push(11);
    stk.push(12);
    cout<<stk.top()<<endl;
    stk.pop();
    cout<<stk.top()<<endl;

    queue<int>que;
    //empty(),swap(),push(),pop(),front(),back()

    priority_queue<int>pq;//default max heap
    //#include <functional> 
    // Include for std::greater and std::less
    //FUNCTIONS
      //empty(),swap(),push(),pop(),top()
    return 0;
}