
// Check if array is having duplicates

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool flag = false;
    int pos1,pos2;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            // if(i == j){
            //     continue;
            // }
            if(arr[i] == arr[j]){
                flag = true;
                pos1 = i;
                pos2 = j;
                break;
            }
        }
    }
    if(flag){
        cout<<"Yes there is duplicate in array at position: "<<pos1<<" & "<<pos2;
    }else cout<<"No Duplicate";

    return 0;
}