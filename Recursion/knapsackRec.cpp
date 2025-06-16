
// Time complexity of recursion depends on two factors: 1) Total number of recursive calls  
//                                              2) Time complexity of additional operations for each recursive call.



// Returning maximum value that knapsack can carry

#include<bits/stdc++.h>
using namespace std;

int maxValue(int value[], int wt[], int n, int W){
    if(n == 0 | W == 0){
        return 0;
    }
    if(wt[n-1]>W){            // as continuously updating W 
        return maxValue(value, wt, n-1, W);
    }
    return max(maxValue(value, wt, n-1, W-=wt[n-1]) + value[n-1], maxValue(value, wt, n-1, W));
}

int main()
{
    int n = 3;
    int value[] = {100,50,150};
    int wt[] = {10,20,30};
    int W = 50;

    cout<<maxValue(value, wt, n, W);

    return 0;
}