
// Merge Sort ---->  Time Complexity - O(n log n)(all, best, worst, average)

#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e){         //we have to merge two arrays so create two arrays
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

//  creating two arrays in heap 
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }    
    int index1 = 0;
    int index2 = 0;
    int i = s;
    while(index1<len1 && index2<len2){
        if(arr1[index1]<arr2[index2]){
            arr[i++] = arr1[index1];
            index1++;
        }else{
            arr[i++] = arr2[index2++];
        }
    }
    while (index1<len1)
    {
        arr[i++] = arr1[index1++];
    }
    while (index2<len2)
    {
        arr[i++] = arr2[index2++];
    }
    
}

void mergesort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(arr,s, mid);          // for dividing left part
    mergesort(arr,mid+1, e);            // for right part

    merge(arr, s, e);


}

int main()
{
    int n;cout<<"Size : ";cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergesort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}