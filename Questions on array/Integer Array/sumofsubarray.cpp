

// Sum of all sub-arrays



#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the size of array:";
    cin >> n;
    cout<<"enter the array:"<<endl;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<i+1<<".";
        cin>>arr[i];
    }
    int mx = 0;
    for(int i=0;i<n;i++){        // For nested for loop time complexity is simply how much time the innerloop is going to execute. (In this program o(n**2))
    //     int sum = 0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         //cout<<sum<<" ";
    //         mx = max(mx, sum); 
    //     }
    //     // cout<<endl;
        mx+=arr[i];
    }
    cout<<mx;


    return 0;
}