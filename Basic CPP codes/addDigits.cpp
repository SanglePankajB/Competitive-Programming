#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the \n";
    cin>>n;
    int sum = 0;
    while (n>0){
        int last_digit = n%10;
        sum += last_digit;
        n=n/10;
    }
    cout<<sum;

    return 0;
}
	// signed int n = 2147483648;cout<<n<<endl;     signed will only print upto 2147483647, nos after will be printed using  unsigned
	// unsigned int n = 2147483648;cout<<n<<endl;