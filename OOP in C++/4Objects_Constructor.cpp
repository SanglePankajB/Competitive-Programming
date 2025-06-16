
// """In reallife application developement constructors are very imp because they dont have user control on their execution, they gets automatically called when instance is created
// for eg when we open application, then app automatically gets connected to internet, db, api's etc we dont ask these permissions to the user """


// when we create our own constructor then default constructor automatically vanishesh
#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
//  This is parameterized construnctor
    Parent(string name, int age){                                     // Constructor (name is same as class name)
        cout<<"Your Name is : "<<name<<" Your age is : "<<age;
    }
    void see(string name){
        cout<<"\nWe're in see method "<<name<<endl;
    }

// Destructor :
    ~Parent(){          // ~ sign at the beginning thats all
        cout<<"Destructor bhiyya aa gaye."<<endl;
    }

};

int main()
{
    Parent Obj("Pankaj", 21);
    Obj.see("Pankaj");

    return 0;
}