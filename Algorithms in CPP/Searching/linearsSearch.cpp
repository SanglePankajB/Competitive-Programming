#include<iostream>
using namespace std;



// Linear search or Sequential search is a method for finding an element within a list. 
//It sequentially checks each element of the list until a match is found or the whole list has been searched.



int isequal(int array[],int key,int n){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            cout<<"This is present in the array at position: ";
            return i;
        }
        
    }   
    return -1;
}

int main()
{
    int n; 
    cout<<"Enter the size of array: \n";
    cin>>n;

    int array[n];
    for (int i=0;i<n;i++){             // i<n because if size of array is 5 then index of the last digit 
        cin>>array[i];                 //would be 4
    }
    int key;
    cout<<"Enter the no you wanna find in array: \n";
    cin>>key;
    cout<<isequal(array,key,n);

    return 0;
}