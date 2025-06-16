#include<bits/stdc++.h>
using namespace std;

void pushINsorted (stack<int>&s, int top){
    
    if( s.empty() || top>=s.top() ){
        s.push(top);
        return;
    }

    int tp = s.top();
    s.pop();

    pushINsorted(s, top);

    s.push(tp);
}

void sortStack (stack<int> &s ){
    if(s.empty()){return;}

    int top = s.top();
    s.pop();

    sortStack(s);
    pushINsorted(s, top);
}

void printstack(stack<int> s){      // remember we are printing in reverse direciton

        while(!s.empty()){
        cout<< s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    stack <int> s;

    s.push(4);
    s.push(-4);
    s.push(3);
    s.push(9);
    s.push(-1);

    sortStack(s);
    printstack(s);

    return 0;
}