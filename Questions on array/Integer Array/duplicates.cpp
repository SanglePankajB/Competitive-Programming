// duplicates in array  

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;   // size of array
    int arr[6] = {1,2,3,3,3,3};
    set<int> st;
    for(int i=0;i<6;i++){
        st.insert(arr[i]);
    }
    cout<<n-st.size();      // no of duplicates in array

    return 0;
}