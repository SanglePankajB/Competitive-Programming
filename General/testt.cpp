#include<iostream>
using namespace std;

int main()
{
    // int arr[] = {1,2,3,4,5,6};

    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    // cout<<sizeof(arr)<<endl;

    // cout<<INT_MIN<<endl;
    // cout<<INT_MAX;

    // int arr2[] = {1, 2,3};
    // cout<<arr[1];

// Demoing how to take multiline inputs
    int arr1[3];
    int arr2[3];
    int arr3[3];

    for (int i=0; i<3; i++){
        cin>>arr1[i];
    }
    for (int i=0; i<3; i++){
        cin>>arr2[i];
    }
    for (int i=0; i<3; i++){
        cin>>arr3[i];
    }
    cout<<"Result: \n";
    for(int i=0; i<3; i++){
        cout<<arr1[i]<<" ";
    }
    for(int i=0; i<3; i++){
        cout<<arr2[i]<<" ";
    }
    for(int i=0; i<3; i++){
        cout<<arr3[i]<<" ";
    }


    return 0;
}