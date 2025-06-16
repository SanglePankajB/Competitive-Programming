#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n =5;
    int arr[5] ={-1,2,-3,4,-5};     // O/p : -1,-3, -5, 2, 4  ==> -ve at LHS & +ve at RHS in order of their occuranc
    vector<int> N;
    vector<int> P;
    
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            N.push_back(arr[i]);
        }else{
            P.push_back(arr[i]);
        }
    }
    int k = 0;
    for(int i=0;i<N.size();i++,k++){
        arr[k] = N[i];
    }
    for(int i=0;i<P.size();i++,k++){
        arr[k] = P[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}