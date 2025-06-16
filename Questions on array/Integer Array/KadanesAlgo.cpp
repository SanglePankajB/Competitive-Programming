
// Kadane's algorithm is an iterative DYNAMIC PROGRAMMING algorithm in which we search for a maximum sum contiguous subarray within a one-dimensional numeric array

// This algorithm will not work for the integers below 0 i.e in array of negative integers.(In case o/p always will be 0)

#include<iostream>
#include <climits>
// climits includes the files: INT_MIN specifies that an integer variable cannot store any value below this limit. Values of INT_MAX and INT_MIN may vary from compiler to compiler. Following are typical values in a compiler where integers are stored using 32 bits. Value of INT_MAX is +2147483647. Value of INT_MIN is -2147483648
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentsum = 0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){       //The time complexity of Kadane's algorithm is O(n) because there is only one for loop which scans the entire array exactly once.
        currentsum+=a[i];
        if(currentsum < 0){
            currentsum = 0;
        } 
        maxsum = max(maxsum, currentsum);
    }
    cout<<maxsum;
    

    return 0;
}

