#include<iostream>
using namespace std;

// Logic :
// whenever wanna swap the nos swap in reverse direction such as always swap b to a, c to b in such direction
// Othewise we are gonna have same no in two different variable and not gonna have one of no. in any variable(This  is the problem with forward swaping)

int main()
{
    cout<<"enter 3 nos:\n";
    int a,b,c;
    cin>>a>>b>>c;
    a = a + b + c;
    b = a - (b+c);     
    c = a - (b+c);     
    a = a - (b+c);
    
    cout<<"new a : "<<a<<" new b : "<<b<<" new c : "<<c;

    return 0;
}

// With temporary variable
// int temp = a;
// a = b;
// b = c;
// c = temp;