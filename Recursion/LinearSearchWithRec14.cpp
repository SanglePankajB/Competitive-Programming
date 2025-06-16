#include<bits/stdc++.h>
using namespace std;

#define ll long long;
#define vint vector<int>;
#define vb vector<bool>;

// dont know how to return index of no which is not present
// int searchkaro(int arr[], int size, int x){                // in funciton(int arr[]) is same as (int *arr)
//     if(size == 0){
//         return -1;
//     }else{
//         if(arr[0] == x){
//         return 0;
//         }else{
//             return 1 + searchkaro(arr+1, size-1, x);
//         }
//     }

// }

bool searchkardo(int arr[], int size, int x){                // in funciton(int arr[]) is same as (int *arr)
    if(size == 0){
        return false;
    }
    if(arr[0] == x){
        return true;
    }else{
        return searchkardo(arr+1, size-1, x);
    }
    
}

int main()
{

    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    if(searchkardo(a, 10, 11) == false){
        cout<<"Element is not present... ";
    }else
    cout<<"Element is present "<<endl;

    // cout<<"present at "<< searchkaro(a, 10, 11);

    return 0;
}