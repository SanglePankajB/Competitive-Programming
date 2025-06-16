// Recursion Problem
// How many ways you can reach the nth stair - https://bit.ly/32VA96H


#include<bits/stdc++.h>
using namespace std;

int countDistinctWays(int nStairs) {
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }
    return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}

int main()
{
    cout<<countDistinctWays(5);

    return 0;
}