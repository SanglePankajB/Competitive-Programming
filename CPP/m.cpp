#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	int arr[3];
	while(t--){
	    for(int i=0;i<3;i++){
	        cin>>arr[i];
	    }
	    sort(arr, arr+3);
	   
	    
	    if((arr[0]+arr[1])/2 >= 35) 
	    {   cout<<"Pass"<<endl;
	        
	    }else cout<<"Fail"<<endl;
	}
	return 0;
}
