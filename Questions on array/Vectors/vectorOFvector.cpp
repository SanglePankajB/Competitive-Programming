#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<vector<int>>v;       // THis is Major and only vector which contains other vectors
    int N;cout<<"Enter the size of major vector: ";cin>>N;
    for (int i = 0; i < N; i++)
    {
        int n;cout<<"Enter size of "<<i<<" Vector: ";cin>>n;
        vector<int>temp;
        for(int j=0;j<n;j++){
            cout<<"Enter the vector: ";
            int x;cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++)
    {
        printvec(v[i]);

        // if(i == v.size()-1) break;
        // cout<<", ";
    }

    return 0;
}