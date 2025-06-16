
// Transpose : switching the rows and columns 

// Problem :
// Given a square matrix A and its number of rows N, return the transpose of A.
// Constrains :
// 1<=N<=100

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of square matrix: ";
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}