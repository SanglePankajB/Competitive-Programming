#include<bits/stdc++.h>
using namespace std;

bool checkpal(string str, int s, int e){
    if(s>e){
        return true;
    }

    if(str[s]!=str[e]){
        return 0;
    }
    return checkpal(str, s+1, e-1);
}

int main()
{
    string str = "pakaj";
    int s = 0;
    int e = str.size()-1;

    if(checkpal(str, s, e)){
        cout<<"Palindrome...";
    }else{
        cout<<"Not Palindrom...";
    }

    return 0;
}