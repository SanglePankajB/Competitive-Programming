#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the size of array:";
    cin >> n;
    cout<<"enter the array:"<<endl;
    int arr[n];
    int mx = -19999;
    for(int i = 0;i<n;i++){
        cout<<i+1<<".";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        mx = max(mx, arr[i]);
        //cout<<mx<<" ";
        
    }
    cout<<mx;

    return 0;
}