


// power of no 

#include<bits/stdc++.h>
using namespace std;

int power(int n, int p){
    if(p == 1) return n;
    int prevPower = power(n,p-1);
    return n * prevPower;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<power(2,4);

    // cout<<pow(2,3);

    return 0;
}