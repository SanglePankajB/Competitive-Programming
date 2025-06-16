#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Inclusive and Exclusive operation
    // e.g Finding total people from people in A & people in B and people in both
    int a = 10; int b = 20; int c = 4;
    int totalUnique = a+b-c;

    // For finding the total unique nos divisible by a & b

    int m,x,y,z;cin>>m>>x>>y;
    cout<< m/x + m/y - m/(x*y);           // m/(x*y) gives no of element divisible by both

    return 0;
}