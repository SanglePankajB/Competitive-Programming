
// For reversing the no. how we can reverse is 
// 1. Divide no.by 10, remainder is the last digit
//     e.g 1234 is the no. when we divide by 10
//     then remainder will be 4 (123.4) in this way  
// 2.  for printing the no. multiply the last digit with 10 that we got and add the next last digit
//     e.g 4*10+3=43 and so on

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number to be reversed: \n";
    cin>>n;
    int reverse=0;
    while (n>0){
        int last_digit=n%10;
        reverse = reverse*10+last_digit;
        n=n/10;                            // every time n is divided by 10 and as it is integer only int value is gonna store not floating . This line is to reduce the no by 1 digit
    }
    cout<<reverse<<endl;
    return 0;
}