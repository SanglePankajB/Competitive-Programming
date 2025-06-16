#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no\n";
    cin>>n;
    int revno = 0;
    while(n>0){
        int lastdig = n%10;
        revno = revno*10 + lastdig;
        n/=10; 
    }
    cout<<revno;
    return 0;
}
// int main()
// {
//     int n;
//     cout<<"enter the ammount\n";
//     cin>>n;
//     int reward = 0;
//     while(n>0){                    // Always remember in case of last digit questions (n>0)
//         int lastdig = n%10;
//         if (lastdig%2 !=0){
//             reward+=lastdig;
//         }       
//         n/=10; 
//     }
//     cout<<reward;

//     return 0;
// }