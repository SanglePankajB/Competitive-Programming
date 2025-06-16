
// Alternate: 
// Q.  form the biggest no from the string 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a = "4201894";

    // sol.1
    sort(a.begin(), a.end(), greater<int>());
    int m = stoi(a);
    cout<<m;

    // a.begin()  This denotes first element not the index of it 
    
    

    return 0;
}