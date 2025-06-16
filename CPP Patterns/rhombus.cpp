#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)         // This loop is of the " " spaces 
        {
            cout<<"  ";
        }

        for(int j=1;j<=n;j++)           // This loop is for * s
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}