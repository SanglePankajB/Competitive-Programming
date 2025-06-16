#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int m = 1;
    int count = 1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            if(j == 0){
                cout<<m;
                m++;
            }else{
                cout<<"*"<<m;
                m++;
            }
            
        }cout<<endl;
        if(i == n-1){
            continue;
        }
        count+=i;
    }
    // for(int i=n;i>0;i--){
    //     m = count;
    //     for(int j=0;j<i;j++){
    //         if(j == 0){
    //             cout<<m;
    //             m++;
    //         }else{
    //             cout<<"*"<<m;
    //             m++;
    //         }
            
    //     }cout<<endl;
    //     count-=i;
    // }


    return 0;
}