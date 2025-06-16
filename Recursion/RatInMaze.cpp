// #NOT WORKING

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int newx, int newy, vector<vector<int>> &arr, vector<vector<bool>> &visited, int n){
    if((newx>=0 && newx<=n-1) && (newy>=0 && newy<=n-1) && (visited[newx][newy] == 0) && (arr[newx][newy] == 1)){
        return true;
    }else
        return false;
}


void solve(vector<vector<int>> &arr, int n, vector<string> &ans, int x, int y, vector<vector<bool>> &visited, string path){

    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y] == 1;

    // Four movements         lexicographical movements(D,L,R,U)
    //1. Down
    if(isSafe(x+1, y, arr, visited, n)){
        // path+="D";
        solve(arr, n, ans, x+1, y, visited, path+'D');
    }
    // Left
    if(isSafe(x, y-1, arr, visited, n)){
        solve(arr, n, ans, x, y-1, visited, path+'L');
    }
    // Right
    if(isSafe(x, y+1, arr, visited, n)){
        solve(arr, n, ans, x, y+1, visited, path+'R');
    }
    // Up
    if(isSafe(x-1, y, arr, visited, n)){
        solve(arr, n, ans, x-1, y, visited, path+'U');
    }

    visited[x][y] == 0;           // Backtrack

}

int main()
{
    // int n;cin>>n;
    // int n = 4;
    // int arr[4][4] = {{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};        // input array which gives path

    cout<<"What is input vec: \n";
    vector<vector<int>> arr(4, vector<int>(4, 0));
    for (int i = 0; i < 4; i++)
    {
        for(int j=0;j<4;j++){
            int x;
            cin>>x;
            arr[i][j] = x;
        }
    }   

    vector<vector<bool>> visited(4, vector<bool>(4, 0));

    string path = "";

    // what we want as o/p
    vector<string> ans;
    
    solve(arr, 4, ans, 0, 0, visited, path);
    
    cout<<"This is ans vector: ";cout<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}