// Quick sort and Merge Sort is based on Recursion

#include<bits/stdc++.h>
using namespace std;

int pivot (int arr[], int s, int e){
//  This function is for adjusting the pivot element at its right position
// We consider any element as pivot
    int p = arr[s];
    int cnt = 0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=p){             // considering first element as pivot
            cnt++;
        }
    }
    int pIndex = s+cnt;
    swap(arr[s], arr[pIndex]);        // Now pivot is at perfect position
    
    // swap(p, arr[pIndex]);        // but not with this (it have wasted your 4-5 hr)  we have to swap 1st ele of array to the pivot not the p

//  place all smaller elements at its left and greater at right

    int i = s, j = e;

// Remember here is gonna be perfect swapping i.e only between incorrect placed elements and after this while loop all the elements are gonna be sorted

    while(i<pIndex && j>pIndex){
        if(arr[i] > arr[pIndex] && arr[j] <= arr[pIndex]){       
            swap(arr[i++], arr[j--]);        
        }
        if(arr[i]<arr[pIndex]){
            i++;
        }
        if(arr[j] > arr[pIndex]){
            j--;
        }
        // while(arr[i]<arr[pIndex]){
        //     i++;
        // }
        // while(arr[j]>arr[pIndex]){
        //     j--;
        // }
        // if(i < pIndex && j > pIndex){       
        //     swap(arr[i], arr[j]);
        //     i++;j--;
        // }
        // if(arr[i] > arr[pIndex] && arr[j] < arr[pIndex]){       
        //     swap(arr[i], arr[j]);
        //     i++;j--;
        // }
    }

    return pIndex;

}

void Quicksort(int arr[], int s, int e){                       
    // base case --> if no elements or 1 ele in array then array is sorted 
    if(s>=e){
        return;
    }
    // get pivot element
    int p = pivot(arr, s, e);

    Quicksort(arr, s, p-1);
    Quicksort(arr, p+1, e);

}

int main()
{
    int n;cin>>n;
    int arr[n] ;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    Quicksort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}




