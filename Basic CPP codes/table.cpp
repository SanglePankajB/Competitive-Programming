#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no you want table of:\n";
    cin>>n;
    cout<<"table is :\n";
    for (int i = 1; i<=10; i++){
        cout<<i*n<<"\n";
    }
    return 0;
}