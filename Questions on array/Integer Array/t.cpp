#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[9] = {1,2,3,4,5,6,7,8,9};
    // Two methods for reversing array  1. swap first half of arrray with second half 
    //                                  2. create new array & assign ele in reverse order
    // IMP for reversing array not printing in reverse direction
    // for(int i=0;i<5;i++){
    //     int temp = arr[i];
    //     arr[i] = arr[9-1-i];
    //     arr[9-1-i] = temp;
    // }

    for(int i=9-1;i>=0;i--){     // I mean are you kidding me. simply reverse for reversing array(actually this is only for printing in reverse direction not for reversing)
        cout<<arr[i];
    }cout<<"Time Travel";

    return 0;
}