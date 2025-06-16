
// push_back()     ----->
// push_front()    ----->  All represents only meaning(front for front & back for back)
// pop()           ----->


// STACK ----> LIFO     Time Complexity: O(N) & Space: O(N)

// supports two main operations : push() & pop()

// for printing we are creating fun cause we cant print like s[i] by indexing, so to not change original stack we use fun

#include<bits/stdc++.h>
using namespace std;

void printstack(stack<int> s){
    int l = s.size();
    for(int i=0;i<l;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
    stack<int > s;
    s.push(0);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"\nThis is top element : ";
    cout<<s.top()<<endl;        // It takes no arguments --> top element only

    cout<<"\nStack goes here: ";
    printstack(s);

    cout<<"\n\nThis is top element after printing: "<<s.top()<<"\n";

    cout<<"\nStack goes here: ";
    printstack(s);cout<<endl;

    return 0;
}