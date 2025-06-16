#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter size of string : ";
    int n; cin>>n;
    cout<<"Enter Strings : ";
    string a,b,c,d;
    cin>>a>>b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if(a == b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}