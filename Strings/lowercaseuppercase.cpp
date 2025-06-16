#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    // lower to upper
    string s = "pankaj";               // Upper case characters are actually smaller by 32 than lowercase chars.
    for(int i=0;i<s.size();i++){
        s[i] -= 32;
    }
    cout<<s<<endl;


    for(int i=0;i<s.size();i++){
        s[i]+=32;
    }
    cout<<s<<endl;

    // IMP 👀If the string combined & contains characters and nos then?

    // string m = "pankajSanglE15";
    // for(int i=0;i<m.size();i++){
    //     if(m[i]>='A' && m[i]<='Z'){
    //         m[i]+=32;
    //     }
    // }
    // cout<<m<<endl;

    // Transform function  
    // transform(m.begin(), m.end(), m.begin(), :: toupper);
    // cout<<m<<endl;
    

    return 0;
}


