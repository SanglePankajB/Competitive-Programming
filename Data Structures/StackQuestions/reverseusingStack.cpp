#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> s;

    string a = "PankaJ";
    string ans = "";

    for (int i = 0; i < a.size(); i++)
    {
        s.push(a[i]);
    }

    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    cout<<ans;

    return 0;
}