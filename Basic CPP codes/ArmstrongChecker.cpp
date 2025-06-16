#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no:\n";
    cin>>n;

    int sum = 0;
    int initial_n = n;                     // Stored initial no n .
    while(n>0){
        int last_digit = n%10;            // Last digit is the remainder of the no. when divided by 10.
        sum += pow(last_digit,3);
        n=n/10;                             // For the decreament of no by 1 digit after every iteration.
                                            // 153 is a armstrong no.
    }
    if (sum==initial_n){
        cout<<"This is an Armstrong Number";
    }else 
        cout<<"Not armstrong.";
    

    return 0;
}

// Don't know why but  (153)  is the exception.