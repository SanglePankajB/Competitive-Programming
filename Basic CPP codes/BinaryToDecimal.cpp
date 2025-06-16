#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n){
    
    int decimal = 0;
    int len = trunc(log10(n)) + 1;           //This fun gives the length of the integer

    for(int i = 0;i<=len;i++){
        int last_digit = n%10;               // This is the last digit of our binary no (for eg 0 of 1010)
        decimal += last_digit*pow(2,i);       // we know decimal is the sum of nos corresponds to 2**i
        n/=10;                                // For decreament of the last digit
    }
    
    return decimal;
}

int OctalToDecimal(int n){
    int octal = 0;
    int len = trunc(log10(n)) + 1;           //This fun gives the length of the integer

    for(int i = 0;i<=len;i++){
        int last_digit = n%10;               // This is the last digit of our binary no (for eg 0 of 1010)
        octal += last_digit*pow(16,i);       // we know decimal is the sum of nos corresponds to 2**i
        n/=10;                                // For decreament of the last digit
    }
    
    return octal;
    
}

int main()
{
    int n;
    cout<<"Enter your choice?\n1.Binary To Decimal\n2.Hexadecimal to decimal\n3.";
    cin>>n;
    
    if(n==1){
    int a;
    cout<<"Enter the binary no\n";
    cin>>a;
    cout<<BinaryToDecimal(a);
    }
    else if (n==2)
    {
        cout<<"Enter the octal no\n";
        int a;
        cin>>a;
        cout<<OctalToDecimal(a);
    }
    
    
    return 0;
}