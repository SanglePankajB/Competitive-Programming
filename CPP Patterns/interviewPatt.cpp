#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter";
    cin>>n;
    int a = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int b= a*2;
            cout<<b<<" ";
            a = b;
        }
        cout<<endl;
    }

    return 0;
}