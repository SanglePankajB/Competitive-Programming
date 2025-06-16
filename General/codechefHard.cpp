// A post on facebook is said to be more popular if the number of likes on the post is strictly greater than the number of likes on some other post. In case the number of likes is same, the post having more comments is more popular.

// Given arrays 
// �
// A and 
// �
// B, each having size 
// �
// N, such that the number of likes and comments on the 
// �
// �
// ℎ
// i 
// th
//   post are 

// A 
// i
// ​
//   and 

// B 
// i
// ​
//   respectively, find out which post is most popular.

// It is guaranteed that the number of comments on all the posts is distinct.

// Input Format
// The first line of input will contain a single integer 
// �
// T, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains a single integer 
// �
// N, the number of posts.
// The second line of each test case contains 
// �
// N space-separated integers 
// �
// 1
// ,
// �
// 2

// A 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   — where 

// A 
// i
// ​
//   is the number of likes on the 
// ℎ
// i 
// th
//   post.
// The third line of each test case contains 
// �
// N space-separated integers 
// �
// 1
// ,
// �
// 2
// B 
// 1
// ​
//  ,B 
// 2
// ​
//  ,…,B 
// N
// ​
//   — where 
// B 
// i
// ​
//   is the number of comments on the 

// i 
// th
//   post.
// Output Format
// For each test case, output on a new line, an integer in the range 
// 1
// 1 to 
// �
// N, denoting the index of the post which is most popular among the 
//  N posts.


// input :
// 4
// 3
// 5 4 4
// 1 2 3
// 3
// 10 10 9
// 2 5 4
// 3
// 3 3 9
// 9 1 3
// 4
// 2 8 1 5
// 2 8 1 9
//output :
// 1
// 2
// 3
// 2

// Test case 
// 1
// 1: The number of likes on the first post is greater than that of second and third post. Thus, the first post is most popular.

// Test case 
// 2
// 2: The first and second post have maximum number of likes. But, the second post has more comments than the first post. Thus, the second post is most popular.







#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	int x, y;

	while(t--){
	    cin>>x;
	    int arr[x];
	    int arr2[x];
	    
	    for(int i=0;i<x;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<x;i++){
	        cin>>arr2[i];
	    }
	    int highlikes = arr[0];
	    int ans = 1;
	    for (int i = 1; i < x; i++) {
	        if(arr[i]>=highlikes){
	            if(arr[i] == highlikes){
	                if(arr2[i] > arr2[ans-1]){
	                    highlikes = arr[i];
	                    ans = i+1;
	                }
	                
	            }else{
	                highlikes = arr[i];
	                ans = i+1; 
	            }
	            
	        }
	        
	    }
	    cout<<ans<<endl;
	    
	}

	
	
	return 0;
}
