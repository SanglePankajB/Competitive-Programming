#include<bits/stdc++.h>
using namespace std;

// int longestConsecutive(vector<int>& arr) {

//         sort(arr.begin(), arr.end());

//         int ans=0;
//         int currans = 1;

//         for(int i=0; i<arr.size()-1; i++){
//             if(arr[i+1]-arr[i]>1){
//                 currans = 1;
//                 continue;
//             }
//             currans++;
//             ans = max(ans, currans);
//         }
//         return ans;        
//     }

int main()
{
    // vector<int> nums = {100,4,200,1,3,2, 2};
    // vector<int> nums2 = {3, 2, 8, 4, 5, 5, 5};
    // // longestConsecutive(nums)

    // unordered_set<int> s;

    // for(int i=0; i<nums2.size(); i++){
    //     s.insert(nums2[i]);
    // }
    
    // for(auto i: s){
    //     if(s.find(i-1) == s.end()){
    //     cout<<i<<endl;
    //     }
    // }



    // vector<int> v[4];
    // cout<<"Newly created vector: "<<endl;
    // for(int i=0;i<v.size(); i++){
    //     cout<<v[i]<<endl;
    // }

    map<string, int> mp;

    mp["abc"] = 1;
    mp["bca"] = 1;

    for(auto i: mp){
        cout << i.first << " => " << i.second << endl;
    }

    

    return 0;
}