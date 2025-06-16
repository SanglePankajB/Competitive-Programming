
// // Inline function is just simple function that allows us to return within the same line where we call it

#include<iostream>
using namespace std;

inline int sum(int a, int b){                   // inline keyword before the funtion
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Enter the nos: ";
    cin>>a>>b;
    cout<<"This is amazing : "<<sum(a,b); 

    return 0;
}


