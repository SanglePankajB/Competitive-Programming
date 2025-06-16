

// Increasing and Decreasing order of a no 

#include<bits/stdc++.h>
using namespace std;

void increasing(int n){
    if(n == 1){
        cout<<1;
        return;
    }
    increasing(n-1);
    cout<<n;
    
}
void decreasing(int n){
    if(n == 1){
        cout<<1;
        return;
    }
    cout<<n;
    decreasing(n-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin>>n;
    increasing(n);cout<<endl;
    decreasing(n);

    return 0;
}