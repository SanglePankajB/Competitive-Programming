
// Possible permutations of array

// not working

#include<bits/stdc++.h>
using namespace std;

void permutation(int arr[], int n){

    if(n == 1 | n == 0){
        cout<<arr[0]<<endl;;
        return;
    }
    int currentind = 0;
    for(int i=0;i<n;i++){
        currentind = i;
        int temp = arr[0];
        arr[0] = arr[currentind];
        arr[currentind] = temp;
        cout<<arr[i];permutation(arr+1,n-1);
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    permutation(arr,n);

    return 0;
}