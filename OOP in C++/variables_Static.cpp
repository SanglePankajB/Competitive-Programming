#include<bits/stdc++.h>
using namespace std;

class variables{
public:
    static int staticVar;       // static/class variable

    int instanceVar = 15;      //Instance Variable can be accessed only by creating objects.

    void localmethode(){
        int localvar = 20;
    }


//  static function ---> 1. can access only static variables
//                       2. No neeed to create object to access
//                       3. Don't have this keyword

    static int demo(){
        return staticVar;          
    }


};
//  :: --> called as scope resolution operator
int variables :: staticVar = 100;       // out of class & main function ---> TO initialize static variable

int main()
{
    cout<< variables::staticVar;        // This is how static member is access through class not through object(can access through object as well)
    cout<<endl;
    cout<<variables::demo();
    return 0;
}

// Static variables are also known as Class variables, declared using the static keyword within a class outside any method constructor or block  Initialization of Static Variable is not Mandatory. Its default value is 0