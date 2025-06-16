

// Finding Fibonacci no of particular position

#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n == 0 | n == 1) return n;
    return fib(n-1) + fib(n-2);
}

void series(int n){
    int t1 = 0;
    int t2 = 1;
    int next;
    while(n--){
        cout<<t1<<" ";
        next = t1+t2;
        t1 = t2;
        t2 = next;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<fib(6)<<endl;
    series(6);
    return 0;
}

