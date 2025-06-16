
// # Google Kickstart

// An arithmatic array is an array that comtains at least two integers and the difference bet consecutive integers are equal.For eg [9,10],[3,3,3],and[9,7,5,3] are arithmetic arrays,while[1,3,3,7],[2,1,2] are not.  Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of longest contiguos arithmetic subarray.


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pd = arr[1]-arr[0];        // potential difference
    int strick = 2;
    int j = 2;
    int ans = 2;              // To store the maximum strick
    while(j<n){

        if(pd == arr[j]-arr[j-1]){
            strick+=1;
        }else{
            pd = arr[j]-arr[j-1];
            strick = 2;     
        }
        ans = max(ans, strick);

        j++;
    }
    cout<<ans;

    return 0;
}