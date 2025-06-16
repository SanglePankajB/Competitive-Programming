
// # Amazon and Oracle
// Question :

// Given an array arr[] of size N. The task is to find the first repeating element in the array of integers , i.e., an element that occurs more than once and whose index of first occurence is smallest.


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
    
    // int arr[3] = {1,2,3};
	// cout<<sizeof(arr)<< "  ";            //sizeof(): it determines the size, in bytes
	// cout<<sizeof(arr)/sizeof(arr[0])<<" ";  // trick for getting size of array

    for(int i=0;i<n-1;i++){
        int occurence = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                occurence+=1;
            }
        }
        if (occurence>1){
            cout<<occurence;
            break;
        }
        
        //return occurence;
        
    }

    return 0;
}