#include<bits/stdc++.h>
using namespace std;
#define N 4

bool isSafe(int board[N][N], int row, int col){
    int i, j;
    // checking upper left diagonal is safe
    for(i=row,j=col; i>=0 && j>=0; i--,j--){
        if(board[i][j]){       // if value of board[i][j] == 1, then that means Queen can attack (present) 
            return false;      // Hence, safe function will return false i.e not safe to place the next Queen
        }
    }
    // checking lower left diagonal is safe
    for(i=row,j=col; i>=0 && j>=0; i++,j--){  
        if(board[i][j]){       
            return false;      
        }
    }
    /* Check this row on left side */
    for (i = 0; i < col; i++){
        if (board[row][i])
            return false;
    }
    return true;
}

// Recursive fun to place the queens
bool NQueen(int board[N][N], int col){
    if(col>=N){
        return true;
    }
    for(int i=0;i<N;i++){
        if(isSafe(board,i,col)){
            // cout<<"Safe";
            board[i][col] = 1;
            if(NQueen(board,col+1)){
                return true;
            }
            board[i][col] = 0;           // BackTraking
        }
    }
    return false;
}
int main()
{
    // We have Exactly N queens to place 
    int board[N][N] = {0};
    
    NQueen(board,0);        // Call for fun

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<" "<<board[i][j]<<" ";
        }cout<<endl;
    }
 
    return 0;
}