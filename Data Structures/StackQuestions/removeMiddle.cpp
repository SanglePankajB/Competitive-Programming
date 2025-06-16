// removing middle element of stack

#include<bits/stdc++.h>
using namespace std;

void printstack(stack<int> s){

        while(!s.empty()){
        cout<< s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void remMiddle(stack <int> &s, int count, int N){
    // Base
    if(count == N/2){
        s.pop();
        return;
    }

    int tp = s.top();           // keeping track of top ele at every iteration
    s.pop();                // poping ele to move to next iteration

    remMiddle(s, count+1, N);
    s.push(tp);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    printstack(s);              // printing in reverse dir.

    cout<<"Now removing middle: \n";

    int count = 0;
    remMiddle(s, count, s.size());
    printstack(s);

    return 0;
}