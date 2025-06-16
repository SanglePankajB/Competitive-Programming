
// XOR ----> if we xor(^) two same element then ans is 0 otherwise if one element is 0 ans is element

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 10;
    int c = 20;
//  PROPERTY 1: 
    int ans = a^b;
    cout<<"xor of same elements: "<<ans<<endl;

//  PROPERTY 2: 
    int diff = a^c;
    cout<<"XOr of diffrent ele: "<<diff<<endl;

//  PROPERTY 3: (IMP for solving lots of problems)
    a = 0;
    int xr = a^b;
    cout<<"Xor of elements with one of ele is 0: "<<xr<<endl;

    return 0;
}