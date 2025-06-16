#include <iostream>
using namespace std;

int main(){
    
    cout<<"Enter the no of rows you want...\n";
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){                 //assume now value of i is 4, 2nd for loop will run until value of j becomes equal to value of i and all the * will be printed in one line then 2nd for loop will terminate and we are applying endl to end the line 
        for(int j = 1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}