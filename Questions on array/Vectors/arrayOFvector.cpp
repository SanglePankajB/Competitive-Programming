// Array of vectors

// THis is kind of 2d arr (v[0][0]) like matrix where rows are fixed (arr is with fixed size) and columns are dynamic so to make both dynamic we use 'vector of vector'

// It looks like        [<1,2,3>, <1,2>, <1>, <3,6,2,3,1,46,6>, <>]      --> size of array is clear

#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    int N;cout<<"Enter the N: ";cin>>N;
    vector<int> v[N];           // N is no of vectors going to get create
    for (int i = 0; i < N; i++)
    {
        int n;cin>>n;          // n is size of vector only for taking inputs purpose
        for(int j =0;j<n;j++){
            int x;cin>>x;
            v[i].push_back(x);
        }
    }

    for(int i=0;i<N;i++){
        printvec(v[i]);
        cout<<endl;
    }
    
    return 0;
}