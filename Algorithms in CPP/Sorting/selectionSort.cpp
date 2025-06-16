
// In selection sort, an array is divided into two sub- arrays, i.e., one is an unsorted sub-array, and the other is sorted sub-array. Initially, we assume that the sorted subarray is empty. First, we will find the minimum element from the unsorted subarray, and we will swap the minimum element with an element which is at the beginning position of the array. This algorithm is named as selection sort because it is selecting the minimum element and then performs swapping.


#include<iostream>
using namespace std;

int Sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j] ;
                arr[j] = temp;
            }
            // cout<<"\nvalue of arr[i]: "<<arr[i];
            
        }
        cout<<"\nSorted array is: ";
            for(int i =0;i<n;i++)
                cout<<arr[i]<<" ";
    }
    cout<<" Final Sorted array is: ";
    for(int i =0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the array:\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Sort(arr,n);

    return 0;
}
