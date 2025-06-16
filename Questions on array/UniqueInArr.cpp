#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<bool> visited(n, false);
    vector<int> v;
    for(int i =0;i<n;i++){
        if(visited[i]){
            continue;
        }else{
            v.push_back(arr[i]);
            for (int j = i; j < n; j++)
            {
                if(arr[i] == arr[j]){
                    visited[j] = true;
                }
            }
            
        }    
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}