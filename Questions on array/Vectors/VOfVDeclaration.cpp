#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Normal vector declaration

    vector<bool> m(4,1);
    for (int i = 0; i < 4; i++)
    {
        cout<<m[i];
    }
    cout<<endl<<"m bool vec ends, v starts..."<<endl;

    // vector of vector auto declaration 

    vector<vector<bool>> v(4, vector<bool>(4,0));    // IMP Line
    // printing every element of contained vector v[i] is 1 vector inside vec V & v[i][j] is element of that Vec.
    for (int i = 0; i < 4; i++)
    {
        for(int j=0;j<4;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    

    return 0;2
}