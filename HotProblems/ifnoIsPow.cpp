
// if no is power of 2 or not

#include<bits/stdc++.h>
using namespace std;

bool isPow(int num){
    while(num>1){
        if(num % 2 == 0){      // same logic for all other nos
            num = num/2;
        }else{
            return false;
        }
    }
    // cout<<num;
    // if(num == 1) return true;
    // else return false;
    return true;
}

int main()
{
    int n;cin>>n;
    cout<<isPow(n);
    return 0;
}