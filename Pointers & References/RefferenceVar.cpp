// Reference variable : This is a variable which is just the another name for a variable
//e.g  i = 5;
//     &j = i;       here i = j

#include<iostream>
using namespace std;

int update(int &a){                 // we're creating a reference variable here (we know that reference             
    a = 1000;                       // variable have same address as actual variable)
    return a;
}

int main()
{
//  Theory:
    int a = 5;
    int &b = a;          // this is just a normal variable b with same address as 'a'
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
    b = 10;             // A reference variable does not store its own values 
    cout<<b<<endl;
    cout<<a<<endl;

//  in practical functions:

    cout<<update(a)<<endl;      // we are simply passing value but in function it is taking value as reference variable

    return 0;
}