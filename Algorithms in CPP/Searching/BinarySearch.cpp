#include<iostream>
using namespace std;


// Binary search, also known as half-interval search, logarithmic search, or binary chop, is a search algorithm that finds the position of a target value within a sorted array. 
// Binary search compares the target value to the middle element of the array.

//  Declaration of array "int arr[5] = {1, 2, 3, 4, 5};"

int BinarySearch(int arr[],int n,int key){

    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            cout<<"Your element is present in the array at position:";
            return mid;
        }else if(key<arr[mid]){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }

    return -1;
}

int main()
{
    
    int n;
    cout<<"enter the size of array:\n";
    cin>>n;
    cout<<"Enter the array:\n";
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to search:\n";
    cin>>key;
    cout<<BinarySearch(arr,n,key);

    return 0;
}