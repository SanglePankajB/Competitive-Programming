
// Getters and setters are used to protect your data, particularly when creating classes. For each instance variable, a getter method returns value of private data member while a setter method sets or updates value in private data member.

//  getters and setters are also known as accessors and mutators, respectively

#include<bits/stdc++.h>
using namespace std;

class Parent{

    string name = "sidd";
    int age = 18;

public:

    // void set(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }

    // we can do above without using this keyword as well only we will have to change the name of parameters see below
    void set(string Name, int Age){
        name = Name;
        age = Age;
    }


    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    
    void Intro(){
        cout<<"Hi,.. This is "<<name<<","<<" I'm "<<age<<"."<<endl;
    }

};

int main()
{
    Parent Obj1;
    Obj1.Intro();
    
    // setting new name and age
    Obj1.set("Pankaj", 22);
    Obj1.Intro();
    cout<<Obj1.getage();

    return 0;
}