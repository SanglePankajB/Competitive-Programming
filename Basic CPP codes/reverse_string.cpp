// Reverse of string

#include<iostream>
using namespace std;

int main(){

    string s ;
    cout<<"Enter the string: \n";
    cin>>s;
    string new_s = "";

    // int n = s.size();
    // while(n>=0){
    //     cout<<s[n-1];
    //     n-=1;
    // }

    // for(int i=s.size()-1;i>=0;i--){
    //     new_s+=s[i];
    // }
    for(int i=s.length()-1;i>=0;i--){
        new_s+=s[i];
    }
    cout<<new_s;

    return 0;
}