#include<iostream>
#include<queue>         // header file

using namespace std;

int main()
{
    // Similar to max heap
    priority_queue<int> pq;         // Creating priority Queue(Higher priority, served first)

    pq.push(4);
    pq.push(34);
    pq.push(9);
    pq.push(1);

    // 34 will be printed as higher value
    cout<<pq.top()<<endl;

//  Creating Priority q as higher value, lower is priority

    priority_queue<int , vector<int> , greater<int>> minPrio;     // Similar to min heap(fucking hard to remember😅)

    minPrio.push(45);
    minPrio.push(4);
    minPrio.push(5);
    minPrio.push(67);
    minPrio.push(0);

    cout<<minPrio.top()<<endl;
    cout<<minPrio.size();


    return 0;
}