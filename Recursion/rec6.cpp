


// Reverse the String

// #include<bits/stdc++.h>
// using namespace std;

// void reverse(string a){
//     if(a.length() == 0){
//         return;
//     }
//     reverse(a.substr(1));
//     cout<<a[0];
// }
// int main()
// {

//     string a;
//     cin>>a;
//     reverse(a);

//     // string a = "pnakaj";          
//     // cout<<sizeof(a)<<endl;           sizeof() gives the size in bytes
//     // cout<<a.length();

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

#define ll long long;
#define vint vector<int>;
#define vb vector<bool>;


void rev(string &a, int s, int e)
{
    if(s == e || s>e){
        return;
    }

    swap(a[s], a[e]);

    rev(a, s+1, e-1);

}

int main()
{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);

    string a = "Pankaj";
    cout<<a<<endl;
    cout<<"substr: "<<a.substr(3)<<endl;
    rev(a, 0, 5);
    cout<<a;

    return 0;
}















