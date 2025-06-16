#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    a = a+b+c+d+e;
    b = a-(b+c+d+e);
    c = a-(b+c+d+e);
    d = a-(b+c+d+e);
    e = a-(b+c+d+e);
    a = a-(b+c+d+e);
    cout<<"New nos are: "<<endl;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;

    return 0;
}