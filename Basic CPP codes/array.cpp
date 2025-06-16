#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin>>arr[i];                 // we are taking input for array
    }
    
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";                 // we dont need to store array to print it by for loop

    }
    cout<<endl;
    //cout<<arr[n];                      // I have no idea why this is not working

    return 0;
}