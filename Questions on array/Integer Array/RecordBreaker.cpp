
//  # Google Kickstart   

// Isyana is given the no of visitor at her local theme park in N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of following conditions: *The no of visitors on the day is strictly larger than no of visitors on each of the previous days.*Either it is the last day, or the no of visitors on the day is strictly larger than the no of visitors on the following day.  Note that the very first day could be a record breaking day!  Please help Isyana find out the no of record breaking day.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the size of array:";
    cin >> n;
    if(n==1){
        cout<<"This is a record breaking day.";
    }
    cout<<"enter the array:"<<endl;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<i+1<<".";
        cin>>arr[i];
    }
    int rbr = 0;
    int max = arr[0];

    if(arr[1]<max){
            rbr +=1;
        }

    for(int i=1;i<n-1;i++){
        if(arr[i]>max && arr[i+1]<arr[i]){
            rbr +=1;
        }
        max = arr[i];
    }
    cout<<rbr;

    return 0;
}