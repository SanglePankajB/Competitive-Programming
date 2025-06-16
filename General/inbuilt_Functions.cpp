#include<bits/stdc++.h>
#include<algorithm>          // Sort() function is from this
using namespace std;

//  Define a comparator fun
bool compare(int a, int b){     // return 0 or 1 obviously
        return a>b;
    }

int main()
{
    // int d,f;
    // cin>>d>>f;
    // cout<<compare(d, f);
// // 1. Swap()
//     swap(d,f);
//     cout<<d<<" "<<f;

// 2. Reverse()
    // string s = "pankaj";
    // reverse(s.begin(),s.end());  // function takes two index parameter only & reverse bet parameteres
    // cout<<s;

// 3. Sort ()
    // int arr[] = {1,2,3,6,5,4};
    // // sort(arr, arr + 6);       // pass name and size of array in this way(We're just storing ele in continuos memory)
    // Now arr is the storage location(address) of the 1st element and arr+6 is of last
    //  👀👀👀 IMP 👀👀👀
    // sort(arr, arr + 6, compare);  // we are not calling funciton we're passing it into another fun
    // for(int i=0;i<6;i++){
    //     cout<<arr[i]<<' ';
    // }
    // 🦢 For sorting in decreasing order🦢
    // Define a comparator fun (see above main)

//4 getline
//     string s ;
    // getline(cin, s);      FOR GETTING ENTIRE LINE
    // cout<<s;
    


    return 0;  
}