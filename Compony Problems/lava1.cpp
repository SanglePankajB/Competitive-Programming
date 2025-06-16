// Equilibrium 
// int arr[5] = {1,7,5,2,6};        1+7 = 8 & 2+6 = 8 --> middle = 5
// int arr[4] = {10,1,1,9};          middle = 1

#include<bits/stdc++.h>
using namespace std;


int main()
{
    // int arr[5] = {1,7,5,2,6};
    int arr[4] = {10,1,1,9};

    int mid = 4/2;

    while(1){

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < mid; i++)
        {
            sum1 += arr[i];
        }
        for (int i = mid+1; i < 4; i++)
        {
            sum2 += arr[i];
        }
        
        if(sum1 == sum2){
            cout<<arr[mid];
            break;
        }else if(sum1>sum2){
            mid = mid-1;
        }else{
            mid = mid+1;
        }

    }

    return 0;
}