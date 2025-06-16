#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count =  0;
    vector<bool> visited(n, false);
    for(int i =0;i<n;i++){
        if(visited[i]){
            continue;
        }
        for(int j =i;j<n;j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        cout<<arr[i]<<" : "<<count<<endl;
        count = 0;
    
    }
    

    return 0;
}