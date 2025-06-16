// #include<bits/stdc++.h>
// using namespace std;
// string manipulate (string *s){
//     *s = "PANKAJ";
//     return *s;
// }
// string man (string &s){
//     string *a = &s;
//     *a = "PAN";
//     return *a;
// }
// int main()
// {
//     string str = "pankaj";

//     cout<<man(str);
//     cout<<" "<<str<<endl;
//     cout<<manipulate(&str)<<endl;
//     cout<<str<<endl;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
string* manipulate (string *s){
    *s = "PANKAJ";
    return s;               // It returns string pointer --> address of s;
}
string man (string &s){
    string *a = &s;
    *a = "PAN";
    return *a;              // It is returning value at a which is string 
}
int main()
{
    string str = "pankaj";

    cout<<man(str);
    cout<<" "<<str<<endl;
    cout<<manipulate(&str)<<endl;
    cout<<str<<endl;

    return 0;
}