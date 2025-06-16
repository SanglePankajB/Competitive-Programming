#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){        // in funciton(int arr[]) is same as (int *arr)
    if(size == 0 | size == 1){
        return true;
    }
    // cout<<arr[0]<<" "<<arr[1];cout<<endl;
    if(arr[0]>arr[1]){
        return false;
    }else{
        return isSorted(arr+1, size-1);
    }

}

int main()
{

    int arr[6] = {3,2,1,6,4,8};
    //  int arr[6] = {1,2,3,4,5,6};

    isSorted(arr, 6);
    if(isSorted(arr, 6)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}