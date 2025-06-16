#include<iostream>
#include<set>                   // Header file for set
using namespace std;

int main()
{
    set<int> st;

    st.insert(4);
    st.insert(4);
    st.insert(4);
    st.insert(3);
    st.insert(3);
    st.insert(3);
    st.insert(1);
    st.insert(1);

    cout<<"This is for:    "<<endl;
    for(int i:st){
        cout<<i<<" ";
    }
    cout<<endl;

    st.erase(st.begin());            // will erase 1st elem
    for(int i:st){
        cout<<i<<" ";
    }

    cout<<"\nThis is count of 4 in set : "<<st.count(4);           // will return true or false (1 OR 0)

    return 0;
}

// Almost All operatios have time comp  O(log n). 
// size, begin, empty -----> O(1)