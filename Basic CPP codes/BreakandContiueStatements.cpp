
// ReadMe
// Rule 1. Break and Continue statement are necessarily made for performing operations on loops(for, while, switch,...etc).
//  Rule 2. Using suitable statement in if condition, we can terminate or pass through the loops.

// Break : The break statement is used to terminate the loop immediately.

// Continue : The continue statement is used to skip the current iteration of the loop.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // while (n>1){

    //     if(n==10){
    //         continue; // For skipping the current iteration
    //     }
         
    //     // if(n==5){
    //     //     cout<<5;
    //     //     break;
    //     // }
    //     cout<<n<<" ";
    //     n--;
    // }
    for(int i=0;i<n;i++){
        cout<<"This is i : "<<i<<"\n";
        for(int j=i;j<n;j++){
            cout<<"This is j: "<<j<<endl;
            if(j==4){
                break;                    // This time break will terminate the inner for loop not outer
            }
        }
    }

    return 0;
}