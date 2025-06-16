#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    

    bool check = 1;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            check = 0;
            break;
        }   
    }

    if(check){
        cout<<"Word is palindrom.";
    }else
    cout<<"Word is not palinfrom.";

    return 0;
}

// // Reverse of string

// int main(){

//     string s ;
//     cout<<"Enter the string: \n";
//     cin>>s;

//     int n = s.size();
//     while(n>=0){
//         cout<<s[n-1];
//         n-=1;
//     }


//     return 0;
// }