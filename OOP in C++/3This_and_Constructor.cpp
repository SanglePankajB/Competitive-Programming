#include<bits/stdc++.h>
using namespace std;

//  This
//  This keyword is a pointer which is pointing toward a variable(class var)

class pankaj
{
public:
    string sirname;     // by default members of class are private. To make public use keyword public
    string name;
    int rolls;

//  we're having adnav we're assigning this to sirname but when same parameter name as that of the class variable then we need to use this keyword for the reference to the class variable 
// see e.g 1 & e.g 2
// e.g 1
    pankaj(string adnav)     // in this case we don't need to use this keyword cause parameter name is different
    {
        sirname = adnav;
    }

//  when we are having same parameter name as that of the class variable
    // pankaj(string sirname)      // parameterized constructor.
    // {
    //     this->sirname = sirname; 
    // }

    pankaj(int roll)     // in this case we don't need to use this keyword cause parameter name is different
    {
        rolls = roll;
    }

};
int main()
{
    pankaj obj1("sangle");               // For creating object syntax (className ObjectName)
    cout<<obj1.sirname<<endl;

    pankaj obj2(01);  
    cout<<obj2.rolls;
    return 0;
}

// FRom Above: 
// A class can have multiple construntors as long as construntors have different parameters 
// We can avoid use of 'this' keyword by not having same parameter name as class variable name 