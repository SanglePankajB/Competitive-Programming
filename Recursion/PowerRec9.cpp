//   a power b with Rec

//  Very Optimize solution    2^4 = 2^2 * 2^2,  2^100 = 2^50 * 2^50  On line no 18

#include<bits/stdc++.h>
using namespace std;

// b is power  
int power (int a, int b){
    if(b == 0){
        return 0;
    }
    if(b == 1){
        return a;
    }

    // Rec call
    int ans = power(a, b/2);

    if(b%2== 0){
        return ans * ans;
    }else{
        return a * ans * ans;
    }
}

int main()
{
    cout<<power(2, 4);

    return 0;
}