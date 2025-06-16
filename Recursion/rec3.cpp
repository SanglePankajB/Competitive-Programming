

// Factorial

#include<bits/stdc++.h>
using namespace std;

int facto(int n){

    if(n == 0) {return 1;}
    return n * facto(n-1);    // facto(n-1) this is called as 'recursive leap of faith'
}
int main()
{

    cout<<facto(3);     // always write cout 🤣😅

    return 0;
}