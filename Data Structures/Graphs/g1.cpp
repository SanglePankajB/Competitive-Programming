// graph representation : 2 ways:-->  1. Adjesecy matrix  2. Adjesency list

// We can't create very big adjecency matrix so we use more effective way adjecency list for representation
// adjecency list optimises the space complexity a lot

//1. Adjesecy matrix --> N**2 space
//2. Adjesency list --> O(N+M) space


// Adjesecy matrix
#include<iostream>
using namespace std;

int main()
{
    int n,m;   // n => no of nodes  & m => no of edges
    int mat[10][10] = {0};
    cin>>m;
    int v1,v2;
    for (int i =0; i<m; i++)
    {
        cin>>v1>>v2;
        mat[v1][v2] = 1;
        mat[v2][v1] = 1;

    }
//  Printing matrix
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
        
    }

    return 0;
}