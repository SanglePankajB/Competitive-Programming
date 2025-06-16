// #include<bits/stdc++.h>
#include <iostream>
using namespace std;



int main()
{
    int n = 5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int newarr[n];
    for (int  i = n-1, j=0; i >=0; i--,j++)
    {
        newarr[j] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<newarr[i]<<" ";
    }
    

    return 0;
}