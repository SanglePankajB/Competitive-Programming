// Adjesecy List

#include<bits/stdc++.h>
using namespace std;
const int N = 10e1;

int main()
{
    vector<int> graph[N];
    int e = 6;
    int u, v;
    for (int i = 0; i < e; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 0; i < e; i++)
    {
        for(auto a: graph[N]){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}