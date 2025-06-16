#include<bits/stdc++.h>
using namespace std;

void findpermutations(string str, int left, int right)
{
    if(left == right){
        cout<<str<<endl;
    }
    for(int i = left;i<=right;i++){
        swap(str[i], str[left]);
        findpermutations(str,left+1,right);
        swap(str[i], str[left]);      // This is backitracking   // We can have the sol without this line also
    }
}

int main()
{
    string str = "abc";
    cout<<"String is : abc"<<endl;
    findpermutations(str, 0, str.length()-1);

    return 0;
}