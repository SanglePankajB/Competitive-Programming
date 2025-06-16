#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }       
    }
    int i = 0, j=0;
    for (int s = 0; s < n*m; s++)
    {
        if(i == 0 && j<m-i){
            cout<<arr[i][j];
            j++;
        }
    }
    

    
    

    return 0;
}