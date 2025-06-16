
// # Facebook, Google , Amazon , Visa

//Question:
// Given an unsorted array A of size N non-negative integers, find a continuous subarray which adds to a given number S.
//Note : (There is difference bet continuous subarray and arithmetic subarray)


// What matters for the problem solving or to solve any problem is that understand the problem first and then imagine the way to solve it and just code the imagination 


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";                 
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"What is the sum(S): ";
    int S;
    cin>>S;
    int sum = 0;
    // int i = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==S){
                cout<<"For this sum array starts from position "<<i+1<<" to "<<j+1;
                return 0;           // We just wanna find only one subarray (We can remove 
                                    // if we want more than one)
            }else if(sum>S){
                sum=0;
                break;           // It will terminate only one for loop (inner)
            }
        }

    }


    return 0;
}

