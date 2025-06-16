#include<iostream>
using namespace std;
   
int fact(int n){

    int factorial = 1;

    for(int i=1;i<=n;i++){
        factorial = factorial*i;
    }
    return factorial;
    
}

int main()
{
    int n,r;
    cout<<"enter n and r\n";
    cin>>n>>r;

    int result = fact(n)/(fact(r)*fact(n-r));
    cout<<result;

    return 0;
}