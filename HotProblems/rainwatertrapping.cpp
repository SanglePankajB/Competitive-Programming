
#include <iostream>
using namespace std;
// # include<string>

int main() {

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++){
			cin>>arr[i];
		}
		int leftarr[n];
		leftarr[0] = arr[0];
		for(int i=1;i<n;i++){
			
			leftarr[i] = max(arr[i], leftarr[i-1]);
			// cout<<leftarr[i]<<" ";
			// cout<<max(arr[i], arr[i-1]);cout<<endl;
		}
		cout<<endl;
		int rightarr[n];
		rightarr[n-1] = arr[n-1];
		for(int i=n-2;i>=0;i--){
			rightarr[i] = max(arr[i], rightarr[i+1]);
		
		}
		cout<<endl;
		int ans = 0;
		for(int i=0;i<n;i++){
			ans+= min(leftarr[i],rightarr[i])-arr[i];
		}
		cout<<ans<<endl;
	 }
	

	return 0;
}
