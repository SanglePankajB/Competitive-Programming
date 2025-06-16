#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;cin>>t;
	int n, k;
	while(t--){

	    cin>>n>>k;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin>>arr[i];
	    }
		long long p;
		long long c=0;
		for (int i = 0; i < (1<<n); i++)
		{
			p = 1;
			for (int j = 0; j < n; j++)
			{
				if(i&(1<<j)){
					p = p*arr[j];
				}
			}
			if(p%k==0){
				cout<<"Yes"<<endl;
				c++;
				break;
			}
		}

		if(c==0) cout<<"No"<<endl;
		
	}
	return 0;
}
