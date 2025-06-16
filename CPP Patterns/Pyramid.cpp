#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"enter brohhh....";
    cin>>n;
    for(int i = 1,k=0; i<=n;i++,k=0)       //Updation k=o will update k to 0 after every iteraiton 
    {
        for(int j=1; j<=n-i;j++)
        {
            cout<<" ";
        }
        while(k !=(2*i)-1)
        {
            cout<<"*";
            k++;                      // value of k should be increamented otherwise it will be infine loop
        }
        cout<<endl;
    }
}