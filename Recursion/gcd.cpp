#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    int mx, mn = min(a, b);        // Logical way for gcd
    if(mn == a){
        mx = b;
    }else{
        mx = a;
    }
    // int i = mn;
    // while(i>0){
    //     if(mx%i == 0 & mn%i==0){
    //         cout<<i;
    //         break;
    //     }else{
    //         i-=1;
    //     }
    // }
    while(1){
        if(mx%mn == 0){
            cout<<mn;
            break;
        }
        int m = mx%mn;       // Euclidian way
        mx = mn;
        mn = m;

    }
    

    return 0;
}