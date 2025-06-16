#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int *arr = new int[5];          // dynamically declaring array
    // delete arr;

    int arr[4]= {1,2,3,4};
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    // cout<<arr[].size();         size() fun does not work on arr

    string s = "pankaj";
    cout<<s.size()<<endl;
    
    // cout<<s[0];
    // cout<<sizeof(s)/sizeof(s[0]);                sizeof() fun doesn't work on string


    return 0;
}