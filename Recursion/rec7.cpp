


// Function to replace pi (3.14)

#include<bits/stdc++.h>
using namespace std;

void replace(string a){
    if(a.length() == 0){       // Stoping Condition
        return;
    }
    if(a[0] == 'p' & a[1] == 'i'){
        cout<<"3.14";
        replace(a.substr(2));
    }else{
        cout<<a[0];
        replace(a.substr(1));
    }
}

int main()
{

    cout<<"Enter string: ";
    string s;
    cin>>s;

    replace(s);

    return 0;
}