

// index of the element in array using recursion

#include<bits/stdc++.h>
using namespace std;

int index(int a[], int size,int x){
    bool f = true;
    if(size == 0 ){
        f= false;
    }
    if(a[0] == x){
        return 0;
    }
    if(f){
        return index(a+1, size-1, x) + 1;         // -1 is getting added into the last o/p i dont have sol
    }else{
        return -1;
    }
    
}

int main()
{
    int n;int x;
    cout<<"enter the size of arr: ";
    cin>>n;
    int arr[n];
    cout<<"enter the arr: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the no to search in arr: ";
    cin>>x;

    cout<<index(arr, n, x);

    return 0;
}