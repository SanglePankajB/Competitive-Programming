
// max no of permutations required to sort array in ascending order

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    cout<<"Enter size of an array: ";
    int n;cin>>n;
    cout<<fact(n);

    return 0;
}