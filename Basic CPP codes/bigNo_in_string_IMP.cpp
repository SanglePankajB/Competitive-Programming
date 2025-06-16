// int can store values less than 10^9 
// long long stores less than 10^18 so,

// What if we have bigger value than that
                // In that case we take value in terms of string and perform different operations on that by changing datatype for required digits 
                // SEE THE EXAMPLE

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s;
    // cin>>s;
    // // For converting last digit char into int

    // int lastdigit = s[s.size()-1]-'0';
    // cout<<lastdigit;

    cout<<"\nExperiment -----------------------\n";
    int a = 1;
    string b ="1";

    // cout<<'10'-'0' + 1;
    cout<<stoi(b) + 10;

    return 0;
}