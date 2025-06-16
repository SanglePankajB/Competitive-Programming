#include<bits/stdc++.h>
using namespace std;

void addatbot(stack<int> &st, int ele){
    // base condition (where we have to stop --> at end(when stack is empty))

    if(st.empty()){
        st.push(ele);
        return;
    }

    int top = st.top();
    st.pop();

    addatbot(st, ele);
    
    st.push(top);


}
void printstack(stack<int> s){

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

//  Element to add at bottom
    int ele = 9;

    addatbot(st, ele);

    printstack(st);

    return 0;
}