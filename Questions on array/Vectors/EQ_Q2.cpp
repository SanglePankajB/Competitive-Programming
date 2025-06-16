#include<bits/stdc++.h>
using namespace std;

int main()
{

    cout<<"Enter size of array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the index upto you want to sort : ";
    int k;
    cin>>k;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        }  
    }
    for(int i=k;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        }  
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}