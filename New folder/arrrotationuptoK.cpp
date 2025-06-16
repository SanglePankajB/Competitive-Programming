#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {1,2,3,4,5,6};

    int newarr[6];

    int k = 2;

    int j = 0;
    for (int i = 6-k; i < 6; i++, j++)
    {
        newarr[j] = arr[i];
    }

    for (int i = 0; i < 6-k; i++, j++)
    {
        newarr[j] = arr[i];
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout<<newarr[i]<<" ";
    }
    

    return 0;
}