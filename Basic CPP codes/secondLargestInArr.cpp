#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

//  Input array

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int first,second,third;
    first=second=third=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third = second;
            second=first;
            first=arr[i];
        }
    }
    cout<<second<<endl;
    cout<<third<<endl;

    return 0;
}