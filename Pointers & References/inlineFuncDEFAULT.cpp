/*  Inline function : If fun body contains less than 2-3 lines then we can create inline fun.
    It is similar to macro like 'replacing the body at the function call everywhere'
    It makes code readable
    It saves extra space for function
    No function call overhead(benifits)
*/


#include<bits/stdc++.h>
using namespace std;

inline int maxi(int a, int b){
    return a>b ? a:b;
}

// Default Arg fun

void defarg(int arr[], int n, int end, int start = 0){  // always keep default argument at rightmost or it wont work
    for (int i = start; i < end; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    cout<<maxi(4,2)<<endl;    // THis will be replaced like below
    // cout<< 4>2 ? a:b;

//  Default arguments 
//   lets create fun defarg()

    int arr[8] = {1,2,3,4,5,6,7,8};

    defarg(arr, 8, 7);


    return 0;
}