#include<bits/stdc++.h>
using namespace std;

void printmyname(int n){
    if(n==10){
        return;
    }
    cout<<"Pankaj"<<endl;
    printmyname(n = n+1);

}

int main()
{
    printmyname(0);

    return 0;
}