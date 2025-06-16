#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no.\n";
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        for(int j=1; j<=i;j++)
        {
            if((i+j)%2==0)              //whenever we are executing only one statement inside any       
                cout<<"1 ";             // loop or conditional statement you can skip {}.(Not required) 
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}