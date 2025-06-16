#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n,k;cin>>n;
    int arr[n];
    cout<<"Enter K : ";
    cin>>k;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
        smallest = min(smallest, arr[i]);
    }

    cout<<"Min diff is : "<< (largest-k) - (smallest+k);
    
    

    return 0;
}