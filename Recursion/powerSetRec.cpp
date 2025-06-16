// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

//           https://leetcode.com/problems/subsets/


#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>arr, vector<vector<int>>& ans, vector<int> output, int index){
    if(index <= arr.size()){
        ans.push_back(output);
    }
    // Exclude
    solve(arr, ans,output, index+1);

    // Include
    int element = arr[index];
    output.push_back(element);
    solve(arr, ans, output, index+1);


}

int main()
{
    vector<int> arr = {1,2,3};

    vector<vector<int>> ans;
    // ans.push_back({1,2,3});

    vector<int> output;

    int index = 0;

    solve(arr, ans, output, index);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}