#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // cout<<arr[n];                                doesn't work like that.

    for(int i=0;i<n;i++){
        cout<<"i is : "<<i<<endl;
        for(int j=0;j<i;j++){           // this loop only runs upto i hence insertion sort performs better that bubble sort in most cases. But if you have kind of or almost sorted array then we use optimized bubble sort(which skips many iterations)
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<< " ";
        }cout<<endl;

    }
    // for (int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}