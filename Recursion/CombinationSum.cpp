#include<bits/stdc++.h>
using namespace std;

void combinations(int arr[], int s, int e, int t, vector<vector<int>> &ans, vector<int> &temp, int sum){
    
    // Base condition
    if(s==e){
        if(sum == t){
        ans.push_back(temp);
        return;
        }
    }
    // Bounding cond
    if(sum>t){
        return;
    }
//  Inclusion
    sum+=arr[s];
    temp.push_back(arr[s]);
    combinations(arr, s, e, t, ans, temp, sum);
//  Exclusion(BackTracking)
    sum-=arr[s];
    temp.pop_back(arr[s]);
    combinations(arr, s+1, e, t, ans, temp, sum);

}

int main()
{
    int arr[4] = {3,2,5,7};
    int target = 7;
    vector<vector<int>> ans;
    vector<int> temp;
    int sum = 0;
    combinations(arr, 0, 3, target, ans, temp, sum);

    
    return 0;
}