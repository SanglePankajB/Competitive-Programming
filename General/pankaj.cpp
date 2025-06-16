
//Given an array Arr of size N such that each element is from the range 0 to 9. Find the minimum possible sum of two numbers formed using the elements of the array. All digits in the given array must be used to form the two numbers.
//Input:
// N = 6
// Arr[] = {6, 8, 4, 5, 2, 3}
// Output: 604
// Explanation: The minimum sum is formed 
// by numbers 358 and 246.



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[6] = {6,8,4,5,2,3};
    int n = 6;

    sort(arr, arr+n);
    vector<int>v;
    int size;
    if(n%2 == 0){
        size = n/2;
    }else{
        size = n/2+1;
    }
    int temp = 0;
    int i = 0;
    for(i=0;i<n;i+=2){
        temp = temp*10+arr[i];
    }
    v.push_back(temp);
    
    temp = 0;
    for(i = 1;i<n;i+=2){
        temp = temp*10+arr[i];
    }
    v.push_back(temp);

    temp = v[0]+v[1];
    string str= to_string(temp);
    cout<< str;

    return 0;
}