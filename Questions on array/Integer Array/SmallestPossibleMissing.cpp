
// # Amazon, Samsung, Acolite, Snapdeal

// Question :
// You are given an array arr[] of N integers including 0.The task is to find the smallest positive number missing from the array.
// Constrain :
// 1<=N<=10**6  

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";                 
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<n;i++){
        if (arr[i]!=i){
            cout<< i;
            break;
        }
    }

    // const int N = 1e6+2;
    // bool check[N];
    // for(int i=0;i<N;i++){
    //     check[i]=0;
    // }

    // for(int i=0;i<n;i++){
    //     if(arr[i]>=0){
    //         check[arr[i]]=1;
    //     }
    // }
    // int ans = -1;
    // for(int i=0;i<N;i++){
    //     if(check[i]==false){
    //         ans = i;
    //         break;
    //     }
    // }
    // cout<<ans<<endl;

    return 0;
}