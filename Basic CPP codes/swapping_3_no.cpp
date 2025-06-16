#include<iostream>
using namespace std;

int main(){

    int a,b,c,d;
    cout<<"Enter the nos to swap\n";
    cin>>a>>b>>c;

    d=a;
    a=b;
    b=c;
    c=d;

    cout<<"swapping nos are : "<<a<<" "<<b<<" "<<c;

    return 0;
}