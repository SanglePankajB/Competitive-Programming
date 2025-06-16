

// First and last position of element in sorted array  
// Remember sorted array = Binary search

#include<bits/stdc++.h>
using namespace std;


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

    int arr[8] = {1,2,3,4,6,7,2,2};
    sort(arr, arr+8);

    pair<int, int> p = firstAndLastPosition(arr,8,2);
    cout<<p.first<<" "<<p.second;

    return 1;
}