

// Occurance of element in sorted array in Log(n); 
// Remember sorted array = Binary search

#include<bits/stdc++.h>
using namespace std;

// With Binary search and time complexity O(log n)

int firstOcc(int *arr, int n, int k){
    int s = 0, e = n-1;
    int ans = -1;
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid] == k){
            ans = mid;
            // for checking at left side
            e = mid-1;
        }
        if(arr[mid]>k){
            e = mid -1;
        }
        if(arr[mid]<k){
            s = mid+1;
        }
        
    }
    return ans;
}
int lastOcc(int *arr, int n, int k){
    int s = 0, e = n-1;
    int ans = -1;
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid] == k){
            ans = mid;
            // for checking at right side
            s = mid+1;
        }
        if(arr[mid]>k){
            e = mid -1;
        }else{
            s = mid+1;
        }
    }
    return ans;

}

// Without Binary Search with time complexity O(n)

pair<int, int> firstAndLastPosition(int *arr, int n, int k)
{
    pair<int, int> p;
    p.first = -1;
    p.second = -1;
    for(int i=0; i<n;i++){
        if(p.first == -1 && arr[i] == k){
            p.first = i;
        }
        if(p.second == -1 && arr[n-1-i] == k){
            p.second = n-1-i;
        }
    }
    return p;
}

int main(){

    int arr[8] = {1,2,2,2,3,3,3,7};

    pair<int, int> p = firstAndLastPosition(arr,8,3);
    cout<<"\nWithout Binary Search: ";
    cout<<p.second-p.first + 1;
    cout<<"\nWith Binary Search: ";
    cout<<lastOcc(arr,8,3) - firstOcc(arr, 8, 3)+1;


    return 1;
}