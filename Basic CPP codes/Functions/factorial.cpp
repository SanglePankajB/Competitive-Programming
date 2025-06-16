#include<iostream>
using namespace std;


// If function is below the main function then we need to call the function above the main func too, and this is function prototyping

// Funtion prototype
// type func_name(aguments);

// int fact(int) {body}   --> acceptible


int fact(int n){
    int factorial = 1;
    for(int i=1;i<=n;i++){
        factorial = factorial*i;
    }
    cout<<factorial;
    return 0;
}

int main(){

    int n;
    cout<<"Enter the no.:\n";
    cin>>n;
    fact(n);

    return 0;
}