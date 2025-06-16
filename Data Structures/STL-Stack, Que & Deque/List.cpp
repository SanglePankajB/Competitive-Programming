// In STL we have List(when we say a List, we talk about a doubly linked list.)

// Lists are sequence containers that allow non-contiguous memory allocation. 
// As compared to vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick.


#include<iostream>
#include<list>          // STL
using namespace std;


int main()
{
    list<int> lst(5, 100);

    for(int i:lst){
        cout<<i<<" ";
    }

    // copy to new list
    list<int> newlst(lst);

    cout<<lst.size()<<" \n";
    // Push Ops
    lst.push_back(10);
    lst.push_front(5);
    lst.push_back(20);
    lst.push_front(0);

    // Pop Ops
    lst.pop_back();
    lst.pop_front();

    // lst.erase(lst.begin(), lst.end());            // Erase
    
    return 0;
}