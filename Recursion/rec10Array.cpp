
// Whether array is sorted or not with recursion

#include<bits/stdc++.h>
using namespace std;

bool sorted(int a[], int size){         // in funciton(int arr[]) is same as (int *arr)
    if(size == 0 | size == 1){
        return true;
    }
    if(a[0]> a[1]){
        return false;
    }
    return sorted(a+1, size-1);
    // if(sorted(a+1, size-1)) {return true;}
    // else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5] = {1,2,8,4,5};
    cout<<sorted(arr, 5);


    return 0;
}