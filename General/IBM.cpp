
// Highest prime among all diagonal elements of square mat

// Both Diagonal ele   1st diagonal mat[i][i],  2nd diagonal mat[i][n-i-1]

#include<bits/stdc++.h>
using namespace std;


bool isprime(int a){
    if(a<0){
        return false;
    }
    if(a==2) return true;
    for (int i = 2; i <=sqrt(a); i+=1)
    {
        if(a%i==0)  return false;
    }
    return true;   

}

int main()
{
    // square mat
    int n;cin>>n;
    int arr[n][n];


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if(isprime(arr[i][i])){
            v.push_back(arr[i][i]);
        }
        if(isprime(arr[i][n-i-1])){
            v.push_back(arr[i][n-i-1]);
        }

    }

    sort(v.begin(), v.end());

    cout<<v[v.size()-1];

    return 0;
}