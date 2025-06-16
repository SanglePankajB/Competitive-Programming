#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 20;
    int b = 10;

    cout<<min(a,b)<< " ";

//  without using inbuilt fun
    int c = a<b ? a:b;
    cout<< c;

    cout<<endl;

    

    return 0;
}