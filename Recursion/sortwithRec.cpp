// Bubble sort using Recursion

#include<bits/stdc++.h>
using namespace std;

void bubble(int *arr, int size){
    if(size == 0){
        return;
    }
    if(size == 1){
        return;
    }

    for (int i = 0; i < size-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubble(arr, size-1);
    
}

int main()
{
    int arr[5] = {2,4,3,1,7};

    bubble(arr, 5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}