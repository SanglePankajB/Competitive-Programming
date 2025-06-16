/*
2D ARRAY CREATION DYNAMICALLY

2D array is just a collection of no of arrays of similar columns  {arr1},{arr3},{arr3}...,etc


When we allocate something dynamically 
e.g     int *a = new int;  ----> THis means pointer a is storing address of int(any) in Heap 
and when we do like 
        int *arr = new int[5] ===> we've created an int array of size 5 & this array stores 5 integer values
        here a pointer arr points to the memory location where there is continuous mem allocated to some int data
        Hence we create 2D array as follows:
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin>>n;

    int** arr = new int* [n];   // here pointer arr is pointing to location where there is array whose elements are again pointers (arr = {addre of arr1, arr2,  arr3,..})
    // simply       arr = { {1,2,3},  {4,5,6}, {7.8.9} }  in case of 3*3 matrix

//  Building array
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];        // we created array here and arr[i] is pointer which stores address to that 
                                   //  array in Heap
    }

//  Input to array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

//  Output to array
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

// As this is dynamically created array so we need to free the memory manually and we cant forget to do so 
// At first we need to free the elements of array then the pointer to the array
// freeying actual array
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
//  freeying pointers to these array
    delete []arr;
    

    return 0;
}