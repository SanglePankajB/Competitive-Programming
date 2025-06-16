#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    int cnt = 0;
    for(int i=s+1;i<=e;i++){        // e is ending index so i<=e, it must check last element as well
        if(arr[i]<arr[s]){          // We're not including s cause we're asuming it as pivot
            cnt++;
        }
    }
    int p = s+cnt;
    swap(arr[p], arr[s]);
    int i = s;
    int j = e;
    while(i<p && j>p){          // if i or j becomes equal to p i.e one of size is filled with right elements
//                              (We know that how many ele are at left side of pivot so if i becomes == p i.e 
//                              all elements are correctly placed Hence that also means all elements at right size  
//                              are also grater that pivot so we dont neeed to get into loop)
        
        if(arr[i]<=arr[p]){        // if element is less or equal to pivot then no need to swap
            i++;
        }
        if(arr[j]>=arr[p]){
            j--;
        }
        if((arr[i]>arr[p]) && arr[j]<arr[p]){
            swap(arr[i++], arr[j--]);
        }
    }
    return p;
}

void QuickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr, s, e);       // p is index of pivot ele
    QuickSort(arr, s, p-1);          
    QuickSort(arr, p+1, e);
}

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    QuickSort(arr, 0, n-1);        // n-1 is ending index.....(dont get confused in idex and size)

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}