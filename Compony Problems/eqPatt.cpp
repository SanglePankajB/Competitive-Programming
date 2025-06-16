#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;

    int k = 1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
            if(i == j) continue;    //to skip the star
            cout<<"*";
        }cout<<endl;
    }
    // k == 11 
    k -=n; 
    int temp = k;

    for(int i=n;i>0;i--){
        
        for(int j = 1;j<=i;j++){
            cout<<temp;
            temp++;
            if(i == j) continue;
            cout<<"*";
        }cout<<endl;
        k -= i-1;
        temp = k;
        // cout<<"This is temp: "<<temp;
    }

    return 0;
}