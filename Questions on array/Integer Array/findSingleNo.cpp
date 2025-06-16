// //  every element is repeated twice find element which  is single


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[5] = {1,2,1,2,3};   // 3 is single hence is output

//     // XOR ----> if we xor(^) two same element then ans is 0 otherwise if one element is 0 ans is element

//     int ans = 0;
//     for (int  i = 0; i < 5; i++)
//     {
//         ans ^= arr[i];      // XOR operation
//     }
//     cout<<ans;
    

//     return 0;
// }

// sol # 2   (take set(unique ele as they are ocuring 2 times double them & traverse array take sum & subtract sum from double ))

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,2,1,2,3}; 
    int sum = 0;
    int ans = 1;
    set<int> st;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
        st.insert(arr[i]);
    }
    for(int i:st){
        ans*=i;
    }

    cout<<ans*2 - sum;

    return 0;
}