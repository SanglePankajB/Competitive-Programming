


// moving all 'x' at end

#include<bits/stdc++.h>
using namespace std;

// For any string function remember that we have to return string not a char
// for that make a string variable 'ans' and return it at the end this makes things easier

string moveallx(string a){
    if(a.length() == 0){
        return "";
    }
    char c = a[0];
    string ans = moveallx(a.substr(1));
    if(c == 'x'){
        return ans+ c;
    }
    return c + ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // string a = "panxxkajxbhxu";
    cout<<moveallx("panxxkajxbhxu");

    return 0;
}