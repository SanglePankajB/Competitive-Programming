
// Matrix multiplication :

// You can only multiply two matrices if their dimensions are compatible , which means the number of columns in the first matrix is the same as the number of rows in the second matrix.

#include<iostream>
using namespace std;

// int main(){

//     int n,m,z;
//     cout<<"Rows of first matrix: ";
//     cin>>n;
//     cout<<"Columns of first matrix: ";
//     cin>>m;
//     cout<<"Colunms of Second matrix: ";
//     cin>>z;

//     int FirstMat[n][m];
//     int SecondMat[m][z];
//     printf("Enter the elements in first matrix: ");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m; j++){
//             cin>>FirstMat[i][j];
//         }
//     }
//     printf("Enter the elements in second matrix: ");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<z; j++){
//             cin>>SecondMat[i][j];
//         }
//     }
//     // Defining output(ans) array by assigning all the values as 0 
//     int ansmat[n][z];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<z;j++){
//             ansmat[n][z] = 0;
//         }
//     }
//     // m is the no of columns in 1st mat and no of rows in 2nd mat.On the basis of this 
    
//     for(int i=0;i<n;i++){             // rows of 1st mat
//         for(int j=0;j<z;j++){         // columns of 2nd mat
//             // int ans = 0;  
//             for(int k=0;k<m;k++){
//                 // ans+=FirstMat[i][k]*SecondMat[k][j];
//                 ansmat[i][j] += FirstMat[i][k]*SecondMat[k][j];
//             }
//             // ansmat[i][j]= ans;
//         }                
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<z;j++){
//             cout<<ansmat[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }

// #include<iostream>
// using namespace std;


// DEBUG ABOVE CODE

int main()
{
int n1,n2,n3;
cout<<"Rows of first matrix: ";
cin >> n1;
cout<<"Columns of first matrix: ";
cin >> n2 ;
cout<<"Colunms of Second matrix: ";
cin>> n3;
cout<<"Enter the elements of First matrix:\n ";
int m1[n1][n2]; int m2[n2][n3]; int ans[n1][n3];
for(int i=0; i<n1; i++) {
for(int j=0; j<n2; j++)
cin >> m1[i][j];
}
cout<<"Enter the elements of the second matrix:\n";
for(int i=0; i<n2; i++) {
for(int j=0; j<n3; j++)
cin >> m2[i][j];
}
for(int i=0; i<n1; i++) {
    for(int j=0; j<n3; j++)
    ans[i][j] = 0;
}
for(int i=0; i<n1; i++) {
    for(int j=0; j<n3; j++)
    {
        for(int k=0; k<n2; k++) {
            ans[i][j] += m1[i][k]*m2[k][j];
        }
    }
}
cout<<"Answer Matrix is : \n";
for(int i=0; i<n1; i++) {
    for(int j=0; j<n3; j++)
        cout << ans[i][j] <<" ";
    cout << endl;
}

return 0;
}

