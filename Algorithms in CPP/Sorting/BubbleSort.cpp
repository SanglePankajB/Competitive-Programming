
// The basic principle behind the bubble sort is that the two adjacent elements are to be compared; if those elements are in correct order, then we move to the next iteration. Otherwise, we swap those two elements

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the array:\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int counter = 1;counter <n;counter++){  // This will decide how many iterations are required.
        for(int i = 0; i<n-counter; i++){     //* n-counter because our last element is gonna be the largest one and in next iteration we dont want to change. // from arr[0] upto the second last value n-counter
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            cout<<"\nThis is array after every interation : ";
            for (int i = 0;i<n;i++){
                cout<<arr[i]<<" ";
        }
    }}
    cout<<"This is the final sorted array : \n";
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
// Insertion sort performs better that bubble sort in most cases. But if you have almost sorted array then we use optimized bubble sort
// Optimization involves if inner for loop did not swap any element then that means they are alreasy sorted, Hence we can skip further iterations

    // int counter = 1;
    // bool sorted = false;
    // while(counter<n){
    //     sorted = false;
    //     for(int i = 0; i<n-counter; i++){       // from arr[0] upto the second last value n-counter
    //         if (arr[i]>arr[i+1]){
    //             int temp = arr[i];
    //             arr[i]=arr[i+1];
    //             arr[i+1]=temp;
    //             sorted = true;
    //         }
    //     }
    //     if(sorted == false){
    //       break;  }               We're breaking out of while loop
    
    //     counter++;