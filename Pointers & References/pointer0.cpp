#include<bits/stdc++.h>
using namespace std;


void man(string* s);
string* maan(string* s);

int main()
{

// Why we need pointer
    int a = 190;
    cout<<&a;
// so address of a is 0x61ff0c
// how to store this value, it is not int, string ,etc  Hence to store this value we need pointer


    // string s = "panajdadas";
    // man(&s);

    // cout<<s;
    // cout<<endl;
    
    // maan(&s);
    // cout<<s;

    return 0;
}


void man(string *s){
    *s = "Pankaj";
}

string* maan(string* s){
    *s = "PANKAJ";
    return s;               // it will return s which is pointer of type string
}