// Reversing stack 
// using recursion

#include<bits/stdc++.h>
using namespace std;

void addatbot(stack<int> &st, int ele){

    if(st.empty()){
        st.push(ele);
        return;
    }

    int top = st.top();
    st.pop();

    addatbot(st, ele);
    
    st.push(top);
}

void REV(stack<int> &st){

    if(st.empty()){
        return;
    }

    int top = st.top();
    st.pop();

    REV(st);
    
    addatbot(st, top);

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
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);


    REV(st);

    printstack(st);

    return 0;
}