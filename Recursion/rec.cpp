// Time complexity of recursion depends on two factors: 1) Total number of recursive calls  
//          2) Time complexity of additional operations for each recursive call.


// Sum of Natural nos

// Tip : All even nos have their least significant bit 0 & odd nos have 1. for e.g binary of 4 is 100 

#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0) return 0;
    int prevSum = sum(n-1);  // sum(n-1) this is called as 'recursive leap of faith'(concept in anuj bhaiya's video)
    return n + prevSum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<sum(5);

    return 0;
}

