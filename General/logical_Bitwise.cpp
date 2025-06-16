
// logical operator  ||,  &&
// Bitwise operator  |,  &


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5; int b = 6;

    // if(a<b | b == a){
    //     cout<<"Condition is true.."<<endl;
    // }
    // if(a<b || b == a){
    //     cout<<"Condition 2 is true.."<<endl;
    // }

    cout<<(a|b)<<endl;
    cout<<(a||b+3)<<endl;

    return 0;
}