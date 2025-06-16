#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;cin>>t;
	

	
	while(t--){
	    vector<int> v;
	    int n;cin>>n;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        /* code */
	        cin>>arr[i];
	    }
	    
	    for (int i = 0; i < n; i++) {
	        for (int j = i; j < n; j++) {
	            v.push_back(abs(arr[i]-arr[j]));
	        }
	    }
	    int ans = 1;
	    bool flag = false;
	    while(1){
	        for (int i = 0; i < v.size(); i++) {
	            if(v[i]%ans == 0){
	                
	                ans++;
	                break;
	            }
	            if(i==v.size()-1){
	                flag = true;
	            }
	        }
	        if(flag){
	        cout<<ans<<endl;
	        break;    
	        }
	        
	    }
	}
	
	return 0;
}
