// string s;
	// getline(cin, s);


#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	// string s = "pankaj";
	string i = "909";
	// int a = stoi(i);         // string to int function (stoi)
	// cout<<a+1<<endl;

	// int to string function to_string()
	// int a = 1;
	// cout<<"It is a string : "<<to_string(a) + "00";

	// Sorting String 
	// string s = "pankaj";
	// sort(s.begin(), s.end());
	// cout<<s<<endl;

// Convert a string of nos into highest possible integer no...?

	sort(i.begin(), i.end());
	reverse(i.begin(), i.end());
	cout<<i<<endl;
	int I = stoi(i);       // Don't forget to declare an integer to store an integer(🤩🤩)
	cout<<"This is integer: "<<I+10<<endl;
	return 0;
}