#include<iostream>
using namespace std;

int main()
{
    // char arr[] = {'P','a','n','k','a','j','\0'};
    // cout<<arr;

    // char arrayy[7] = {'P','a','n','k','a','j','\0'};
    // cout<<arrayy;

    // char array[7] = {'P','a','n','k','a','j'};
    // cout<<array;

    // char array[7] = {'P','a','n','k','a'};  // It is not neccesary that array should have all element present. You can still print if you have less elements in array that its size.(Not more than the size😉😎)
    // cout<<array;

    // char array[7];
    // cout<<"Enter your array: \n";cin>>array;
    // cout<<array;

    // char array[] = "Pankaj is my name.";
    // cout<<array[1];  // a will be printed, follows indexing
  
    // cout<<array;     // total array will be printed
  
    int n;
    cin>>n;
    char arr[n];
    cout<<"Enter the char array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    

    return 0;
}