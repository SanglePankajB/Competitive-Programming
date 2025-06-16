
// If string contains some of uppercase char & we want only lower case
// Hence we change only in wanted chars.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "PankaJSangle";
    for(int i=0;i<a.size();i++){
        if(a[i]>='A'&& a[i]<='Z'){
            a[i]+=32;
        }
    }
    cout<<a<<endl;

    return 0;
}