// IMP

// SAMSUNG, XPERIA

// QUESTION: 
// How to search the target from the matrix while matrix is sorted?

// ******** If matrix is sorted then we can apply some logic but if not so then we are gonna need to perform brut force i.e, seach every element from the matrix and check if it is present or not. *******



#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m; cout<<"Enter the size of matrix: \n";cin>>n>>m;
    int matrix[n][m];cout<<"Enter the elements in matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];
    }
    int target;cout<<"Enter the target: ";cin>>target;

    // As our matrix is sorted we are going to start from upperright corner and depending on we are either going left(c--) or  down (r++)😉😉

    // What we want is we shouldn't go outside the columns and rows so add the parameters in while loop right.
    // we can not use for loop cause for loop works one after anothe element and here we are traversing according to our element (🐥 But we can use for loop in bruteForce approach cause we are gonna go throgh all elements in that.🐥)
    bool found = false;
    int r = 0, c = m-1;             // rows starting from 1st and columns from last(m-1) as indexing from 0
    while(r<n && c>=0){             // we are increasing rows so they should not increase beyond n-1 and 
                                    //decreasing columns so they should not decrease beyond 0.
    if(matrix[r][c]==target){
        found = true;
        break; 
    }
    if(matrix[r][c]<target){
        r++;
    }else
    c--;

    }
    if(found){
        cout<<"Element is found.";
    }else
    cout<<"Elenent is Not found. ";


    return 0;
}