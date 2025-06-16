
// Longest word in the array/Sentence

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cin.ignore();
    
    char arr[n+1];           // * n+1 is for last character \0
    cout<<"Enter the array : \n";
    cin.getline(arr, n);    //To read few sentences from a stream, the preferred way is to use getline() function. It can read till it encounters newline.
    // cin.ignore();        // always used after getline for clearing the buffer.

    int i=0;
    int current = 0, maxlen = 0;
    int st = 0, maxst = 0;
    while(1){

        if(arr[i] == ' ' || arr[i]=='\0'){
            if(current > maxlen){
                maxlen = current;
                maxst = st;
            }
            current = 0;
            st = i+1;
        }else
        current++;
        if(arr[i]== '\0')
            break;

        i++;
    
    }
    cout<<maxlen<<"\n";
    for(int i=0;i<maxst;i++){
        cout<<arr[i+maxst];
    }
    

    // int n;
    // cout<<"Enter size: \n";
    // cin>>n;

    // char arr[n+1];
    // cin>>arr;
    // int maxlen = 0;
    // int current = 1;
    // int start_st = 0;
    // int end_st = 0;

    // for(int i=0;i<n-1;i++){

    //     if(arr[i]==' ' || arr[i]=='\0'){
    //         current = 1;
    //         end_st = i;
    //         if(current < maxlen){
    //             start_st = i+1;
    //             end_st = 0;
    //         }
    //     }else{
    //         current++;
    //         start_st++;
    //     }
        
    //     maxlen = max(maxlen, current);
        
    // }
    // for(int i=start_st;i<end_st;i++){
    //     cout<<arr[i];
    // }
    
    // cout<<maxlen-1;      // cause every time it is counting one extra of last char space or '\0'.


    return 0;
}