// Integer pointer holds address of integer variable, float pointer holds of float variable and so on...,


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n = 10;
    // &n means address of n 
    int *ptr = &n;           // variable ptr stores address of n

    // we use * because address contains not only nos but also letters 'f,e' cause it's hexadecimal
    cout<<ptr<<endl;          // This will print the addrerss

    int m = *ptr;             //This will store the value at address ptr into m
    cout<<m<<endl;
    cout<<*ptr<<endl;          // * is used before address always( 👀 * simply means value at adress_then adress)

    // int l = *&n;              // This is just a mess similar to 'int l = n' ==> means 'value at address n'🤩
    // cout<<l;

    cout<<endl;
    string s = "pankaj";
    string a = s;        // m is copying s changes in m can't affect s
    string &p = s;      
//   above line is declaretion of string p which has the same address as s (IMP🦢Basically we are having 2 string refering same address🦢)
    cout<<p<<endl;
    p[0] = 'P';
    cout<<s<<endl;
    s[0] = 'C';
    cout<<p<<endl;
    cout<<&s<<" "<< &p;     // Both will have same address

// Double pointers:
cout<<"\ndouble pointer: \n";
    int z = 5;
    int* p1 = &z;
    int** p2 = &p1;  
    int*** p3 = &p2;  
//  Conclusion : 
//  p1 will store address of z, but *p1 will store value at that address
//  now p2 will store address of p1, but *p2 will store value at that address means which is address of z and **p2 will store the value(value(at address z))

// e.g
    cout<<p1<<endl;
    cout<<"printing value at p : "<<p3<<endl; // it stores address of p2
    cout<<"this is *p3 value at p2 : "<<*p3<<endl; // it stores value but value is the address of p1
    cout<<"this is **p3 value at p1 : "<<**p3<<endl; // it stores value of value p1 but value is the address of z
    cout<<&z<<endl;
    cout<<"printing value at p3 : "<<***p3<<endl;    // should print 5;

// e.g 2
    int value = 100;
    int *v = &value;
    int **v1 = &v;
    int ***v2 = &v1;
// we can print that value by following ways

    cout<<value<<endl;
    cout<<*v<<endl;     // v stores address of value
    cout<<**v1<<endl;   // v1 stores address of v
    cout<<***v2<<endl;  // v2 stores address of v1

// Explaination : 
//  *v2 will print value at address v1, **v2 will print value at address v, ***v2 will print value at address value(actual value)

    return 0;
}