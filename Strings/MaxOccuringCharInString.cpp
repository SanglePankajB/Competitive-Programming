
// maximum occuring char in string 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "pankajbhausahebsanglesanglesssssssss";
    int atoz[26];
    for(int i=0;i<26;i++){      // We can simply do this as int 👍atoz[26] = {0};👍
        atoz[i] = 0;
    }

    // whenever we declare any variable and dont assign any value to them then sometimes it assigns garbage value
//  if string contains uperCase chars first we convert them to lower

    for(int i=0;i<a.size();i++){
        if(a[i]>='A'&& a[i]<='Z'){
            a[i]+=32;
        }
    }
    int mx = 0;
    char ans = 'a' ;
    for(int i=0;i<a.size();i++){
        atoz[a[i]-'a']++  ;                // increament in array at index a[i]-'a'          
                                          // values of a-z starts from 'a'. so a < rest of chars.

    }
    for(int i=0;i<26;i++){
        if(atoz[i]>mx){
            mx = atoz[i];
            ans = i+'a';         // lets say 3rd char + 'a'(value of a) = character
        }    
    }
    cout<<ans<<endl;
    cout<<mx<<endl;

    return 0;
}
