#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n;cout<<"enter the size of array : ";cin>>n;
    int arr[7];
    cout<<"Enter the array: "<<endl;
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    cout<<"Enter the k: ";
    cin>>k;
//  Approach 1: 
    // int ans[n];
    // for(int i=k, j=0;i<n;i++,j++){
    //     ans[j] = arr[i];
    // }
    // for(int i=0, j=n-k;i<k;i++,j++){
    //     ans[j] = arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<ans[i]<<" ";
    // }

//  Approach 2: 
    reverse(arr, arr+n);            // step 1 : reverse entire array

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    reverse(arr, arr+(n-k));        // step 2
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    reverse(arr+(n-k), arr+n);      // step 3
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

    return 0;
}