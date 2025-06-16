
// Recursive solution has complexity of O(n!)

#include<bits/stdc++.h>
using namespace std;

void findpermutations(string str, int left, int right)
{
    if(left == right){
        cout<<str<<endl;
    }
    for(int i = left;i<=right;i++){     // Every time i will start from left not from 0 (left is increasing)
        swap(str[i], str[left]);
        findpermutations(str,left+1,right);

        // swap(str[i], str[left]);         //This is Undo & This fucking line is backtracking & fucking confusing
    }
}

int main()
{
    int m = 0;
    string str = "123";
    findpermutations(str, 0, str.length()-1);

    return 0;
}