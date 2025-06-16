#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,4,3,2,5};

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
        
    }
    cout<<arr[5-2]<<endl;

    // cout<<sizeof(arr)/sizeof(arr[0]);
    

    return 0;
}