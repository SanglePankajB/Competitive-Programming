
// Encrypt using key 
//      shift nos by k places

// e.g  encrypt by k = 3,  25143 ---> 43251

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 25143;
    int k = 3;
    string a = to_string(n);
    
    a+=a;

    string ans = "";

    for(int i=0;i<a.size()/2;i++){
        ans+=a[i+3];
        
    }
    
    cout<<stoi(ans) ;
    

    return 0;
}