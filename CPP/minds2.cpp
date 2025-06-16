#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    // largest
    int smaller = 9999999;
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
        smaller = min(smaller, arr[i]);

    }
    cout<<"largest: "<<arr[4]<<endl;
    cout<<"smaller: "<<smaller;

    return 0;
}